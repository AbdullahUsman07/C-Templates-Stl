#include <iostream>
#include <string>
#include <iomanip>
#include<cstring>
using namespace std;

// for size 4
void NOT(bool *op, int size, char op_name)
{

    cout << "\t Truth Table of NOT Operation:\n ";
    cout << "\n"
         << setw(10) << op_name << setw(15) << "! " << op_name << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << setw(10) << op[i] << setw(15) << !op[i] << "\n";
    }
}

void AND(bool *op1, bool *op2, int size, const char *op_name1, const char *op_name2)
{
    cout << "\t Truth Table of AND Operation:\n ";
    cout << "\n"
         << setw(10) << op_name1 << setw(10) << op_name2 << setw(15) << op_name1 << " ^ " << op_name2 << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << setw(10) << op1[i] << setw(10) << op2[i] << setw(15) << (op1[i] && op2[i]) << "\n";
    }
}

void OR(bool *op1, bool *op2, int size, const char *op_name1, const char *op_name2)
{
    cout << "\t Truth Table of OR Operation:\n ";
    cout << "\n"
         << setw(10) << op_name1 << setw(10) << op_name2 << setw(15) << op_name1 << " V " << op_name2 << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << setw(10) << op1[i] << setw(10) << op2[i] << setw(15) << (op1[i] || op2[i]) << "\n";
    }
}

void Implies(bool *op1,bool *op2,int size, const char *op_name1,const char *op_name2){
    cout<<" \t Truth Table of Implication is: \n";
    cout<<"\n"<<setw(10)<<op_name1<<setw(10)<<op_name2<<setw(15)<<op_name1 <<" -> "<<op_name2<<"\n";
    for(int i=0;i<size;i++)
    {
        bool result= !(op1[i]==1&& op2[i]==0);
        cout<< setw(10)<<op1[i]<<setw(10)<<op2[i]<<setw(15)<<result<<"\n";
    }
}

bool *Negate(bool *arr,int size){
    for(int i=0;i<size;i++){
        arr[i]=!arr[i];
    }
    return arr;
}


int main()
{
    string exp;
    int no_of_exp;
    do
    {
        cout << " Input how many variables you want to input:(1-3) ";
        cin >> no_of_exp;
    } while (no_of_exp > 3 && no_of_exp < 0);

    // generating Table for 1 Expression
    if (no_of_exp == 1)
    {
        bool p[2] = {0, 1};
        cin.ignore();
        cout << " Input Your Expression: ";
        getline(cin, exp);
        if (exp == "p")
        {
            NOT(p, 2, 'p');
        }
        else if (exp == "q")
        {
            NOT(p, 2, 'q');
        }
        else if (exp == "r")
        {
            NOT(p, 2, 'r');
        }
        else
        {
            cout << "Invalid Expression!";
        }
    }
    else if (no_of_exp == 2)
    {
        bool p[] = {0, 0, 1, 1};
        bool q[] = {0, 1, 0, 1};
        string input;

        cin.ignore();        
        cout<<" Input the Expression (without any spaces): ";
        getline(cin,input);
        
        if(input.length()==3){
            // It means simple Conjunction or Disjunction Without any Negation

            // possible values for conjunctions
            if(input=="p^q"){
                AND(p,q,4,"p","q");
            }
            else if(input=="q^p"){
                AND(q,p,4,"q","p");
            }
            else if(input=="q^q"){
                AND(q,q,4,"q","q");
            }
            else if(input=="p^p"){
                AND(p,p,4,"p","p");
            }
            

            // possible values for disjunctions
            else if(input=="pVq"){
                OR(p,q,4,"p","q");
            }
            else if(input=="qVp"){
                OR(q,p,4,"q","p");
            }
            else if(input=="pVp"){
                OR(p,p,4,"p","p");
            }
            else if(input=="qVq"){
                OR(q,q,4,"q","q");
            }

            else{
                cout<<"Invalid Expression\n";
            }
            
        }
        else if(input.length()==4){

            //possible conjunctions
            if(input=="!p^q"){
                AND(Negate(p,4),q,4,"!p","q");
            }
            else if(input=="p^!q"){
                AND(p,Negate(q,4),4,"p","!q");
            }
            else if(input=="!q^p"){
                AND(Negate(q,4),p,4,"!q","p");
            }
            else if(input=="q^!p"){
                AND(q,Negate(p,4),4,"q","!p");
            }
            

            // Possible Disjunctions
            else if(input=="!pVq"){
                OR(Negate(p,4),q,4,"!p","q");
            }
            else if(input=="pV!q"){
                OR(p,Negate(q,4),4,"p","!q");
            }
            else if(input=="!qVp"){
                OR(Negate(q,4),p,4,"!q","p");
            }
            else if(input=="qV!p"){
                OR(q,Negate(p,4),4,"q","!p");
            }

            //Possibilities of Implications
            else if(input=="p->q")
            {
                Implies(p,q,4,"p","q");
            }
            else if(input=="q->p")
            {
                Implies(q,p,4,"q","p");
            }
            else if(input=="p->p")
            {
                Implies(p,p,4,"p","p");
            }
            else if(input=="q->q")
            {
                Implies(q,q,4,"q","q");
            }
            
            else
            {
                cout<<"Ivalid Expression\n";
            }
        }
        else if(input.length()==5)
        {
            if(input=="!p->q")
            {
                Implies(Negate(p,4),q,4,"!p","q");
            }
            else if(input=="p->!q")
            {
                Implies(p,Negate(q,4),4,"p","!q");
            }
            else if(input=="!q->p")
            {
                Implies(Negate(q,4),p,4,"!q","p");
            }
            else if(input=="q->!p")
            {
                Implies(q,Negate(p,4),4,"q","!p");
            }

            else if(input=="!p^!q")
            {
                AND(Negate(p,4),Negate(q,4),4,"!p","!q");
            }
            else if(input=="!pV!q")
            {
                OR(Negate(p,4),Negate(q,4),4,"!p","!q");
            }
            else if(input=="!p^!p")
            {
                AND(Negate(p,4),Negate(p,4),4,"!p","!p");
            }
            else if(input=="!qV!q")
            {
                OR(Negate(q,4),Negate(q,4),4,"!q","!q");
            }
            else
            {
                cout<<" Invalid Expression\n";
            }
        }
        else if(input.length()==6)
        {
            if(input=="!p->!q")
            {
                Implies(Negate(p,4),Negate(q,4),4,"!p","!q");
            }
            else if(input=="!q->!p")
            {
                Implies(Negate(q,4),Negate(p,4),4,"!q","p");
            }
            else
            {
                cout<<" Invalid Expression\n";
            }
        }

        
     

       
    }

    return 0;
}