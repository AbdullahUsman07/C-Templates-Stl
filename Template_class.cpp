
//  Template classes are also known as the Parametrized Class
//  Why we use Templates?
//  1- DRY principle
//  2- Generic Programming (for example defining a class for all data types)


//   I am Creating a template class for int,float,double

#include<iostream>
using namespace std;

template <class T>
class Vector
{
    public:
    T* arr;
    int size;

    Vector(int sz)
    {
        size=sz;
        arr=new T[size];
    }

    T dotproduct(const Vector & v)
    {
        T result=0;
        
        for(int i=0;i<size;i++)
        {
            result+=this->arr[i]*v.arr[i];
        }
        return result;
    }

    friend ostream& operator<<(ostream& out,const Vector & v)
    {
        out<<v.arr[0]<<"i + "<<v.arr[1]<<"j +"<<v.arr[2]<<"k";
        return out;
    }

    ~Vector()
    {
        if(size!=0)
        {
            delete [] arr;
        }
    }

};


int main()
{
    Vector<int> v1(3);
    Vector<int> v2(3);

    int i;
    for(i=0;i<v1.size;i++)
    {
        v1.arr[i]=9-i;
        v2.arr[i]=7-i;
    }

    int prod= v1.dotproduct(v2);
    cout<<" The Dot Product of \n"<<v1<<" and \n"<<v2<<" will be "<<prod<<endl;

    return 0;

    // The same can be done for the double data type as well just write 
    // Vector<double> v . We can even do that for char datatype as well

}
