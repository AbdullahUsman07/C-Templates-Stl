#include<iostream>
#include<list>
using namespace std;

template<class T>
void display(list<T> &lst)
{
    //Creating an iterator for the list
    typename list<T>::iterator it;
    for(it=lst.begin();it!=lst.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void del(list<int> &lst)
{
    int ele;
    bool flag=false;
    cout<<" Input Element you want in delete in list: ";
    cin>>ele;
    list<int>:: iterator iter=lst.begin();
    for(int i=0;i<lst.size();i++,iter++)
    {
        if(ele==*iter)
          {
            flag=true;
          }
    }
    if(flag)
    {
        // remove is a built in function
        lst.remove(ele);
    }
    else
    {
        cout<<" element did not exist in list!\n";
    }

}

//   Some Built-in methods include 
//   pop_front(), pop_back()

int main()
{
    list<int> list_1; // it is an empty list
    list<int> list_2(7); // size will be seven and all elements will be initialized by zero
    int size,element,i;
    cout<<"Input the size of the list you want: ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"Input element "<<i+1<<": ";
        cin>>element;
        list_1.push_back(element);
    }
    // Cretaing iterator for list_2
    list<int>::iterator iter;
    for(iter=list_2.begin(),i=0;i<list_2.size();i++)
    {
        cout<<"Input element you want to insert: ";
        cin>>element;
        *iter=element;
        iter++;
    }
    display(list_1);
    display(list_2);

    // deleting a specific element
    // del(list_2);
    // cout<<" List after deletion will be: \n";
    // display(list_2);
    // Built-in method to sort the list
    // list_1.sort();

    // merging two lists together
    list_1.merge(list_2);
    cout<<"After merging will be: ";
    display(list_1);

    // reversing a list
    list_1.reverse();
    cout<<"After Reverse: ";
    display(list_1);

    return 0;
}