#include<iostream>
#include<vector>
using namespace std;

//  Vectors are mostly like arrays but there is no size issue

template <class K>
void display(vector<K> &vec){
    
    cout<<"Elements of Your Vector are: ";
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
        
    }
    cout<<endl;
}


int main()
{
    // We can also use constructors
    vector<char> vec2(5,'l'); //we declare the size 5
    // We can also give the value
    vector<int> vec3(4,9); //4 size and all elements are 9
    display(vec2);
    vector<int> vec1;
    int size,elements;
    // Creating iterator of my Vector
    cout<<"Input the size of your vector: ";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        cout<<"Input element that you want in your vector: ";
        cin>>elements;
        vec1.push_back(elements);
    }
    cout<<" Size of the Vector "<<vec1.size()<<endl;
    display(vec1);
    vec1.pop_back();
    cout<<" Size of the Vector "<<vec1.size()<<endl;
    display(vec1);
    vector<int>:: iterator iter=vec1.begin(); //It Starts Pointing to the start
    //  Inserting the elemets using insert function it can take 3 parameters
    //  1- iterator 2-no of copies 3-element
    vec1.insert(iter,2,9); //it will insert 9 two times at the begining
    cout<<" Size of the Vector "<<vec1.size()<<endl;
    display(vec1);

    return 0;
}

