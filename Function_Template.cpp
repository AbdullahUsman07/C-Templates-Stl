#include<iostream>
using namespace std;

template<class T1,class T2>
float cal_avg(T1 num1,T2 num2){
    return (num1+num2)/2;
}



// Function to Swap two Varibale 
template<class T>
void Swap(T &first,T &second)
{
    T temp=first;
    first=second;
    second=temp;
}

int main()
{
    float result;
    result=cal_avg(4.98,8.43);
    cout<<" Average Will be: "<<result<<endl;
    char var_1='x',var_2='k';
    cout<<" Before Swaping:\n Variable 1: "<<var_1<<"  "<<" Variable 2: "<<var_2<<endl;
    Swap(var_1,var_2);
    cout<<" After Swaping:\n Variable 1: "<<var_1<<"  "<<" Variable 2: "<<var_2<<endl;

    return 0;
}
