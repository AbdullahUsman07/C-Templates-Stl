#include<iostream>
#include<map>
#include<string>
using namespace std;

// Map is an associate array

int main()
{
    map<string,int> marks_map;
    marks_map["Abdullah"]=86;
    marks_map["Umais"]=56;
    marks_map["Hamza"]=34;

    map<string,int>::iterator iter=marks_map.begin();
    // inserting elements in a map

    marks_map.insert({{"Ahmed",44},{"Ibrahim",66}});
    for(;iter!=marks_map.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }

    return 0;
}