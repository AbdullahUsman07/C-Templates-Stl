#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>
using namespace std;

// Function to Generate Truth Table of NOT
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

// Function to Generate Truth Table of AND for two Variables
void AND(bool *op1, bool *op2, const char *op_name1, const char *op_name2)
{
    cout << "\t Truth Table of AND Operation:\n ";
    cout << "\n"
         << setw(10) << op_name1 << setw(10) << op_name2 << setw(15) << op_name1 << " ^ " << op_name2 << "\n";
    for (int i = 0; i < 4; i++)
    {
        cout << setw(10) << op1[i] << setw(10) << op2[i] << setw(15) << (op1[i] && op2[i]) << "\n";
    }
}

// Function to Generate Truth Table of OR for two Variables
void OR(bool *op1, bool *op2, const char *op_name1, const char *op_name2)
{
    cout << "\t Truth Table of OR Operation:\n ";
    cout << "\n"
         << setw(10) << op_name1 << setw(10) << op_name2 << setw(15) << op_name1 << " V " << op_name2 << "\n";
    for (int i = 0; i < 4; i++)
    {
        cout << setw(10) << op1[i] << setw(10) << op2[i] << setw(15) << (op1[i] || op2[i]) << "\n";
    }
}

// Function to Generate Truth Table of Implication for two Variables
void Implies(bool *op1, bool *op2, const char *op_name1, const char *op_name2)
{
    cout << " \t Truth Table of Implication is: \n";
    cout << "\n"
         << setw(10) << op_name1 << setw(10) << op_name2 << setw(15) << op_name1 << " -> " << op_name2 << "\n";
    for (int i = 0; i < 4; i++)
    {
        bool result = !(op1[i] == 1 && op2[i] == 0);
        cout << setw(10) << op1[i] << setw(10) << op2[i] << setw(15) << result << "\n";
    }
}

// Function to Generate Truth Table of Negated Implication for two Variables
void not_Implies(bool *op1, bool *op2, const char *op_name1, const char *op_name2)
{
    cout << " \t Truth Table of Implication is: \n";
    cout << "\n"
         << setw(10) << op_name1 << setw(10) << op_name2 << setw(15)<<"!( " << op_name1 << " -> " << op_name2 <<" )"<< "\n";
    for (int i = 0; i < 4; i++)
    {
        bool result = (op1[i] == 1 && op2[i] == 0);
        cout << setw(10) << op1[i] << setw(10) << op2[i] << setw(15) << result << "\n";
    }
}

// Function to Generate Truth Table of NOR for two Variables
void NOR(bool *op1, bool *op2, const char *op_name1, const char *op_name2)
{
    cout << "\t Truth Table of OR Operation:\n ";
    cout << "\n"
         << setw(10) << op_name1 << setw(10) << op_name2 << setw(15) << "!( " << op_name1 << " V " << op_name2 << " )" << "\n";
    for (int i = 0; i < 4; i++)
    {
        cout << setw(10) << op1[i] << setw(10) << op2[i] << setw(15) << !(op1[i] || op2[i]) << "\n";
    }
}

// Function to Generate Truth Table of NAND for two Variables
void NAND(bool *op1, bool *op2, const char *op_name1, const char *op_name2)
{
    cout << "\t Truth Table of AND Operation:\n ";
    cout << "\n"
         << setw(10) << op_name1 << setw(10) << op_name2 << setw(15) << "!( " << op_name1 << " ^ " << op_name2 << " )" << "\n";
    for (int i = 0; i < 4; i++)
    {
        cout << setw(10) << op1[i] << setw(10) << op2[i] << setw(15) << (op1[i] && op2[i]) << "\n";
    }
}

// Function to Generate Truth Table of BiConditional for two Variables
void Bicondi(bool *op1, bool *op2, const char *op_name1, const char *op_name2)
{
    cout << " \t Truth Table of Biconditional is: \n";
    cout << "\n"
         << setw(10) << op_name1 << setw(10) << op_name2 << setw(15) << op_name1 << " <-> " << op_name2 << "\n";
    for (int i = 0; i < 4; i++)
    {
        bool result = (op1[i] == op2[i]);
        cout << setw(10) << op1[i] << setw(10) << op2[i] << setw(15) << result << "\n";
    }
}

// Function to Generate Truth Table of Negated BiConditional for two Variables
void not_Bincondi(bool *op1, bool *op2, const char *op_name1, const char *op_name2)
{
    cout << " \t Truth Table of Negated Biconditional is: \n";
    cout << "\n"
         << setw(10) << op_name1 << setw(10) << op_name2 << setw(15) << "!( " << op_name1 << " <-> " << op_name2 << " )" << "\n";
    for (int i = 0; i < 4; i++)
    {
        bool result = !(op1[i] == op2[i]);
        cout << setw(10) << op1[i] << setw(10) << op2[i] << setw(15) << result << "\n";
    }
}

void AND(bool *arr1, bool *arr2, bool *result)
{
    for (int i = 0; i < 8; i++)
    {
        result[i] = (arr1[i] && arr2[i]);
    }
}

void OR(bool *arr1, bool *arr2, bool *result)
{
    for (int i = 0; i < 8; i++)
    {
        result[i] = (arr1[i] || arr2[i]);
    }
}

void Implies(bool *arr1, bool *arr2, bool *result)
{
    for (int i = 0; i < 8; i++)
    {
        result[i] = !(arr1[i] == 1 && arr2[i] == 0);
    }
}

void not_Implies(bool *arr1, bool *arr2, bool *result)
{
    for (int i = 0; i < 8; i++)
    {
        result[i] = (arr1[i] == 1 && arr2[i] == 0);
    }
}

void NAND(bool *arr1, bool *arr2, bool *result)
{
    for (int i = 0; i < 8; i++)
    {
        result[i] = !(arr1[i] && arr2[i]);
    }
}

void NOR(bool *arr1, bool *arr2, bool *result)
{
    for (int i = 0; i < 8; i++)
    {
        result[i] = !(arr1[i] || arr2[i]);
    }
}

 

bool *Negate(bool *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = !arr[i];
    }
    return arr;
}

// Truth Table for Three Variable Operations
void Table(bool *op1, bool *op2, const char *func1, bool *op3, const char *func2, const char *op_name1, const char *op_name2, const char *op_name3)
{
    bool *result_1 = new bool[8];
    bool *result_2 = new bool[8];

    // Check for the First Function
    if (func1 == "^")
    {
        AND(op1, op2, result_1);
    }
    else if (func1 == "V")
    {
        OR(op1, op2, result_1);
    }
    else if (func1 == "->")
    {
        Implies(op1, op2, result_1);
    }
    else
    {
        cout << " Invalid Function \n";
        return;
    }

    // Check for thr Second Function
    if (func2 == "^")
    {
        AND(result_1, op3, result_2);
    }
    else if (func2 == "V")
    {
        OR(result_1, op3, result_2);
    }
    else if (func2 == "->")
    {
        Implies(result_1, op3, result_2);
    }
    else
    {
        cout << " Invalid Function \n";
        return;
    }

    cout << setw(10) << op_name1 << setw(10) << op_name2 << setw(10) << op_name3 << setw(15) << op_name1 << " " << func1 << " " << op_name2 << setw(15) << "( " << op_name1 << " " << func1 << " " << op_name2 << " ) " << func2 << " " << op_name3 << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << setw(10) << op1[i] << setw(10) << op2[i] << setw(10) << op3[i] << setw(15) << result_1[i] << setw(20) << result_2[i] << "\n";
    }

    delete[] result_1;
    delete[] result_2;
}

void Table_(bool *op1, bool *op2, const char *func1, bool *op3, const char *func2, const char *op_name1, const char *op_name2, const char *op_name3)
{
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
        cout << " Input the Expression (without any spaces): ";
        getline(cin, input);

        if (input.length() == 3)
        {
            // It means simple Conjunction or Disjunction Without any Negation

            // possible values for conjunctions
            if (input == "p^q")
            {
                AND(p, q, "p", "q");
            }
            else if (input == "q^p")
            {
                AND(q, p, "q", "p");
            }
            else if (input == "q^q")
            {
                AND(q, q, "q", "q");
            }
            else if (input == "p^p")
            {
                AND(p, p, "p", "p");
            }

            // possible values for disjunctions
            else if (input == "pVq")
            {
                OR(p, q, "p", "q");
            }
            else if (input == "qVp")
            {
                OR(q, p, "q", "p");
            }
            else if (input == "pVp")
            {
                OR(p, p, "p", "p");
            }
            else if (input == "qVq")
            {
                OR(q, q, "q", "q");
            }

            else
            {
                cout << "Invalid Expression\n";
            }
        }
        else if (input.length() == 4)
        {

            // possible conjunctions
            if (input == "!p^q")
            {
                AND(Negate(p, 4), q, "!p", "q");
            }
            else if (input == "p^!q")
            {
                AND(p, Negate(q, 4), "p", "!q");
            }
            else if (input == "!q^p")
            {
                AND(Negate(q, 4), p, "!q", "p");
            }
            else if (input == "q^!p")
            {
                AND(q, Negate(p, 4), "q", "!p");
            }

            // Possible Disjunctions
            else if (input == "!pVq")
            {
                OR(Negate(p, 4), q, "!p", "q");
            }
            else if (input == "pV!q")
            {
                OR(p, Negate(q, 4), "p", "!q");
            }
            else if (input == "!qVp")
            {
                OR(Negate(q, 4), p, "!q", "p");
            }
            else if (input == "qV!p")
            {
                OR(q, Negate(p, 4), "q", "!p");
            }

            // Possibilities of Implications
            else if (input == "p->q")
            {
                Implies(p, q, "p", "q");
            }
            else if (input == "q->p")
            {
                Implies(q, p, "q", "p");
            }
            else if (input == "p->p")
            {
                Implies(p, p, "p", "p");
            }
            else if (input == "q->q")
            {
                Implies(q, q, "q", "q");
            }

            else
            {
                cout << "Ivalid Expression\n";
            }
        }
        else if (input.length() == 5)
        {
            if (input == "!p->q")
            {
                Implies(Negate(p, 4), q, "!p", "q");
            }
            else if (input == "p->!q")
            {
                Implies(p, Negate(q, 4), "p", "!q");
            }
            else if (input == "!q->p")
            {
                Implies(Negate(q, 4), p, "!q", "p");
            }
            else if (input == "q->!p")
            {
                Implies(q, Negate(p, 4), "q", "!p");
            }

            else if (input == "!p^!q")
            {
                AND(Negate(p, 4), Negate(q, 4), "!p", "!q");
            }
            else if (input == "!pV!q")
            {
                OR(Negate(p, 4), Negate(q, 4), "!p", "!q");
            }
            else if (input == "!p^!p")
            {
                AND(Negate(p, 4), Negate(p, 4), "!p", "!p");
            }
            else if (input == "!qV!q")
            {
                OR(Negate(q, 4), Negate(q, 4), "!q", "!q");
            }
            else if (input == "p<->q")
            {
                Bicondi(p, q, "p", "q");
            }
            else if (input == "q<->p")
            {
                Bicondi(q, p, "q", "p");
            }
            else
            {
                cout << " Invalid Expression\n";
            }
        }
        else if (input.length() == 6)
        {
            if (input == "!p->!q")
            {
                Implies(Negate(p, 4), Negate(q, 4), "!p", "!q");
            }
            else if (input == "!q->!p")
            {
                Implies(Negate(q, 4), Negate(p, 4), "!q", "p");
            }
            else if (input == "!p<->q")
            {
                Bicondi(Negate(p, 4), q, "!p", "q");
            }
            else if (input == "p<->!q")
            {
                Bicondi(p, Negate(q, 4), "p", "!q");
            }
            else if (input == "!q<->p")
            {
                Bicondi(Negate(q, 4), p, "!q", "p");
            }
            else if (input == "q<->!p")
            {
                Bicondi(q, Negate(p, 4), "q", "!p");
            }
            else if (input == "!(p^q)" || input == "!(q^p)")
            {
                NAND(p, q, "p", "q");
            }
            else if (input == "!(pVq)" || input == "!(qVp)")
            {
                NOR(p, q, "p", "q");
            }

            else
            {
                cout << " Invalid Expression\n";
            }
        }
        else if (input.length() == 7)
        {
            if (input == "!p<->!q")
            {
                Bicondi(Negate(p, 4), Negate(q, 4), "!p", "!q");
            }
            else if (input == "!q<->!p")
            {
                Bicondi(Negate(q, 4), Negate(p, 4), "!q", "!p");
            }
            else if (input == "!(!p^q)" || input == "!(q^!p)")
            {
                NAND(Negate(p, 4), q, "!p", "q");
            }
            else if (input == "!(p^!q)" || input == "!(!q^p)")
            {
                NAND(p, Negate(q, 4), "!p", "q");
            }
            else if (input == "!(!p^!q)" || input == "!(!q^!p)")
            {
                NAND(Negate(p, 4), Negate(q, 4), "!p", "!q");
            }
            else if(input =="!(p->q)")
            {
                not_Implies(p,q,"p","q");
            }
            else if(input =="!(q->p)")
            {
                not_Implies(q,p,"q","p");
            }
        }
        else if (input.length() == 8)
        {
            if (input == "!(p<->q)" || input == "!(q<->p)")
            {
                not_Bincondi(p, q, "p", "q");
            }
            else if(input =="!(!p->q)")
            {
                not_Implies(Negate(p,4),q,"!p","q");
            }
            else if(input =="!(!q->p)")
            {
                not_Implies(Negate(q,4),p,"!q","p");
            }
            else if(input =="!(p->!q)")
            {
                not_Implies(p,Negate(q,4),"p","!q");
            }
            else if(input =="!(q->!p)")
            {
                not_Implies(q,Negate(p,4),"q","!p");
            }
        }
        else if (input.length() == 9)
        {
            if (input == "!(!p<->q)" || input == "!(q<->!p)")
            {
                not_Bincondi(Negate(p, 4), q, "!p", "q");
            }
            else if (input == "!(p<->!q)" || input == "!(!q<->p)")
            {
                not_Bincondi(p, Negate(q, 4), "p", "!q");
            }
            else if(input =="!(!p->!q)")
            {
                not_Implies(Negate(p,4),Negate(q,4),"!p","!q");
            }
            else if(input =="!(!q->!p)")
            {
                not_Implies(Negate(q,4),Negate(p,4),"!q","!p");
            }
        }
        else if (input.length() == 10)
        {
            if (input == "!(!p<->!q)" || input == "!(!q<->!p)")
            {
                not_Bincondi(Negate(p, 4), Negate(q, 4), "!p", "!q");
            }
            
        }
    }

    else if (no_of_exp == 3)
    {
        bool p[] = {0, 0, 0, 0, 1, 1, 1, 1};
        bool q[] = {0, 0, 1, 1, 0, 0, 1, 1};
        bool r[] = {0, 1, 0, 1, 0, 1, 0, 1};

        cin.ignore();
        string input;
        cout << " Input Expression (Kindly add braces accordingly): ";
        getline(cin, input);

        // Possible Combinations for Disjunction and Conjunction
        if (input == "(p^q)^r" || input == "r^(p^q)")
        {
            Table(p, q, "^", r, "^", "p", "q", "r");
        }
        else if (input == "(p^q)Vr" || input == "rV(p^q)")
        {
            Table(p, q, "^", r, "V", "p", "q", "r");
        }
        else if (input == "(pVq)^r" || input == "r^(pVq)")
        {
            Table(p, q, "V", r, "^", "p", "q", "r");
        }
        else if (input == "(pVq)Vr" || input == "rV(pVq)")
        {
            Table(p, q, "V", r, "V", "p", "q", "r");
        }
        // Possiblities invloving Negation with disjucntion
        else if (input == "(!pV!q)V!r" || input == "!rV(!pV!q)")
        {
            Table(Negate(p, 8), Negate(q, 8), "V", Negate(r, 8), "V", "!p", "!q", "!r");
        }
        else if (input == "(pV!q)V!r" || input == "!rV(pV!q)")
        {
            Table(p, Negate(q, 8), "V", Negate(r, 8), "V", "p", "!q", "!r");
        }
        else if (input == "(pVq)V!r" || input == "!rV(pVq)")
        {
            Table(p, q, "V", Negate(r, 8), "V", "p", "q", "!r");
        }
        else if (input == "(!pV!q)Vr" || input == "rV(!pV!q)")
        {
            Table(Negate(p, 8), Negate(q, 8), "V", Negate(r, 8), "V", "!p", "!q", "r");
        }
        else if (input == "(!pVq)V!r" || input == "!r(!pVq)")
        {
            Table(Negate(p, 8), q, "V", Negate(r, 8), "V", "!p", "q", "!r");
        }

        // Possiblities invloving Negation with conjuction
        else if (input == "(!p^!q)^!r" || input == "!r^(!p^!q)")
        {
            Table(Negate(p, 8), Negate(q, 8), "^", Negate(r, 8), "^", "!p", "!q", "!r");
        }
        else if (input == "(p^!q)^!r" || input == "!r^(p^!q)")
        {
            Table(p, Negate(q, 8), "^", Negate(r, 8), "^", "p", "!q", "!r");
        }
        else if (input == "(p^q)^!r" || input == "!r^(p^q)")
        {
            Table(p, q, "^", Negate(r, 8), "^", "p", "q", "!r");
        }
        else if (input == "(!p^!q)^r" || input == "r^(!p^!q)")
        {
            Table(Negate(p, 8), Negate(q, 8), "^", Negate(r, 8), "^", "!p", "!q", "r");
        }
        else if (input == "(!p^q)^!r" || input == "!r^(!p^q)")
        {
            Table(Negate(p, 8), q, "^", Negate(r, 8), "^", "!p", "q", "!r");
        }

        // Possiblities invloving Negation with conjuction and disjunction
        else if (input == "(!pV!q)^!r" || input == "!r^(!pV!q)")
        {
            Table(Negate(p, 8), Negate(q, 8), "V", Negate(r, 8), "^", "!p", "!q", "!r");
        }
        else if (input == "(!p^!q)V!r" || input == "!rV(!p^!q)")
        {
            Table(Negate(p, 8), Negate(q, 8), "^", Negate(r, 8), "V", "!p", "!q", "!r");
        }
        else if (input == "(pV!q)^!r" || input == "!r^(pV!q)")
        {
            Table(p, Negate(q, 8), "V", Negate(r, 8), "^", "p", "!q", "!r");
        }
        else if (input == "(p^!q)V!r" || input == "!rV(p^!q)")
        {
            Table(p, Negate(q, 8), "^", Negate(r, 8), "V", "p", "!q", "!r");
        }
        else if (input == "(pVq)^!r" || input == "!r^(pVq)")
        {
            Table(p, q, "V", Negate(r, 8), "^", "p", "q", "!r");
        }
        else if (input == "(p^q)V!r" || input == "!rV(p^q)")
        {
            Table(p, q, "^", Negate(r, 8), "V", "p", "q", "!r");
        }
        else if (input == "(!pV!q)^r" || input == "r^(!pV!q)")
        {
            Table(Negate(p, 8), Negate(q, 8), "V", Negate(r, 8), "^", "!p", "!q", "r");
        }
        else if (input == "(!p^!q)Vr" || input == "rV(!p^!q)")
        {
            Table(Negate(p, 8), Negate(q, 8), "^", Negate(r, 8), "V", "!p", "!q", "r");
        }
        else if (input == "(!pVq)^!r" || input == "!r^(!pVq)")
        {
            Table(Negate(p, 8), q, "V", Negate(r, 8), "^", "!p", "q", "!r");
        }
        else if (input == "(!p^q)V!r" || input == "!r(!p^q)")
        {
            Table(Negate(p, 8), q, "^", Negate(r, 8), "V", "!p", "q", "!r");
        }

        // possiblities involving implication

        else if (input == "(p->q)->r")
        {
            Table(p, q, "->", r, "->", "p", "q", "r");
        }
        else if (input == "(!p->q)->r")
        {
            Table(Negate(p, 8), q, "->", r, "->", "!p", "q", "r");
        }
        else if (input == "(p->!q)->r")
        {
            Table(p, Negate(q, 8), "->", r, "->", "p", "!q", "r");
        }
        else if (input == "(p->q)->!r")
        {
            Table(p, q, "->", Negate(r, 8), "->", "p", "q", "!r");
        }
        else if (input == "(!p->!q)->r")
        {
            Table(Negate(p, 8), Negate(q, 8), "->", r, "->", "!p", "!q", "r");
        }
        else if (input == "(!p->q)->!r")
        {
            Table(Negate(p, 8), q, "->", Negate(r, 8), "->", "!p", "q", "!r");
        }
        else if (input == "(p->!q)->!r")
        {
            Table(p, Negate(q, 8), "->", Negate(r, 8), "->", "p", "!q", "!r");
        }
        else if (input == "(!p->!q)->!r")
        {
            Table(Negate(p, 8), Negate(q, 8), "->", Negate(r, 8), "->", "!p", "!q", "!r");
        }

        // Possiblities invloving implication and conjunction
        else if (input == "(p^q)->r")
        {
            Table(p, q, "^", r, "->", "p", "q", "r");
        }
        else if (input == "(!p^q)->r")
        {
            Table(Negate(p, 8), q, "^", r, "->", "!p", "q", "r");
        }
        else if (input == "(p^!q)->r")
        {
            Table(p, Negate(q, 8), "^", r, "->", "p", "!q", "r");
        }
        else if (input == "(p^q)->!r")
        {
            Table(p, q, "^", Negate(r, 8), "->", "p", "q", "!r");
        }
        else if (input == "(!p^!q)->r")
        {
            Table(Negate(p, 8), Negate(q, 8), "^", r, "->", "!p", "!q", "r");
        }
        else if (input == "(p^!q)->!r")
        {
            Table(p, Negate(q, 8), "^", Negate(r, 8), "->", "p", "!q", "!r");
        }
        else if (input == "(!p^q)->!r")
        {
            Table(Negate(p, 8), q, "^", Negate(r, 8), "->", "!p", "q", "!r");
        }
        else if (input == "(!p^!q)->!r")
        {
            Table(Negate(p, 8), Negate(q, 8), "^", Negate(r, 8), "->", "!p", "!q", "!r");
        }

        else if (input == "(p->q)^r")
        {
            Table(p, q, "->", r, "^", "p", "q", "r");
        }
        else if (input == "(!p->q)^r")
        {
            Table(Negate(p, 8), q, "->", r, "^", "!p", "q", "r");
        }
        else if (input == "(p->!q)^r")
        {
            Table(p, Negate(q, 8), "->", r, "^", "p", "!q", "r");
        }
        else if (input == "(p->q)^!r")
        {
            Table(p, q, "->", Negate(r, 8), "^", "p", "q", "!r");
        }
        else if (input == "(!p->!q)^r")
        {
            Table(Negate(p, 8), Negate(q, 8), "->", r, "^", "!p", "!q", "r");
        }
        else if (input == "(p->!q)^!r")
        {
            Table(p, Negate(q, 8), "->", Negate(r, 8), "^", "p", "!q", "!r");
        }
        else if (input == "(!p->q)^!r")
        {
            Table(Negate(p, 8), q, "->", Negate(r, 8), "^", "p", "!q", "!r");
        }
        else if (input == "(!p->!q)^!r")
        {
            Table(Negate(p, 8), Negate(q, 8), "->", Negate(r, 8), "^", "!p", "!q", "!r");
        }

        // possiblities involving implication and disjuntion

        else if (input == "(pVq)->r")
        {
            Table(p, q, "V", r, "->", "p", "q", "r");
        }
        else if (input == "(!pVq)->r")
        {
            Table(Negate(p, 8), q, "V", r, "->", "!p", "q", "r");
        }
        else if (input == "(pV!q)->r")
        {
            Table(p, Negate(q, 8), "V", r, "->", "p", "!q", "r");
        }
        else if (input == "(pVq)->!r")
        {
            Table(p, q, "V", Negate(r, 8), "->", "p", "q", "!r");
        }
        else if (input == "(!pV!q)->r")
        {
            Table(Negate(p, 8), Negate(q, 8), "V", r, "->", "!p", "!q", "r");
        }
        else if (input == "(pV!q)->!r")
        {
            Table(p, Negate(q, 8), "V", Negate(r, 8), "->", "p", "!q", "!r");
        }
        else if (input == "(!pVq)->!r")
        {
            Table(Negate(p, 8), q, "V", Negate(r, 8), "->", "!p", "q", "!r");
        }
        else if (input == "(!pV!q)->!r")
        {
            Table(Negate(p, 8), Negate(q, 8), "V", Negate(r, 8), "->", "!p", "!q", "!r");
        }

        else if (input == "(p->q)Vr")
        {
            Table(p, q, "->", r, "V", "p", "q", "r");
        }
        else if (input == "(!p->q)Vr")
        {
            Table(Negate(p, 8), q, "->", r, "V", "!p", "q", "r");
        }
        else if (input == "(p->!q)Vr")
        {
            Table(p, Negate(q, 8), "->", r, "V", "p", "!q", "r");
        }
        else if (input == "(p->q)V!r")
        {
            Table(p, q, "->", Negate(r, 8), "V", "p", "q", "!r");
        }
        else if (input == "(!p->!q)Vr")
        {
            Table(Negate(p, 8), Negate(q, 8), "->", r, "V", "!p", "!q", "r");
        }
        else if (input == "(p->!q)V!r")
        {
            Table(p, Negate(q, 8), "->", Negate(r, 8), "V", "p", "!q", "!r");
        }
        else if (input == "(!p->q)V!r")
        {
            Table(Negate(p, 8), q, "->", Negate(r, 8), "V", "p", "!q", "!r");
        }
        else if (input == "(!p->!q)V!r")
        {
            Table(Negate(p, 8), Negate(q, 8), "->", Negate(r, 8), "V", "!p", "!q", "!r");
        }
    }

    return 0;
}
