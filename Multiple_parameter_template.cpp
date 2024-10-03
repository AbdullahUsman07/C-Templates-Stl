#include<iostream>
using namespace std;

//  Basic Syntax:
//  template<class T1, class T2>

template<class T1, class T2>
class Myclass
{
    T1 val_1;
    T2 val_2;

    public:
    Myclass(T1 a,T2 b)
    {
        val_1=a;
        val_2=b;
    }

    void display()
    {
        cout<<" Value 1: "<<val_1<<endl;
        cout<<" Value 2: "<<val_2<<endl;
    }

};

// int main()
// {
//     Myclass<char,double>obj('A',8.898);
//     obj.display();
//     return 0;
// }


//     We can also Create Template class with default arguments.

template<class T1=int,class T2=float, class T3=char>
class Abdullah{
    T1 a;
    T2 b;
    T3 c;
    public:
    Abdullah(T1 x, T2 y,T3 z):a(x),b(y),c(z){};

    void display()
    {
        cout<<" The value of a is: "<<a<<endl;
        cout<<" The value of b is: "<<b<<endl;
        cout<<" The value of c is: "<<c<<endl;
    }

};

//  In main() we are gonna call it as

int main()
{
    Abdullah<> obj(4,6.6,'g');
    Abdullah<float,char> obj2(6.6,'l','k');
    Abdullah<char,int,float> obj3('q',7,8.0);
    obj.display();
    obj2.display();
    obj3.display();

    return 0;
}
