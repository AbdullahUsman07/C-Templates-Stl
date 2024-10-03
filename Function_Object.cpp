#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

// Function Objects: Functions that are wrapped in a class also known as functor
// It is available like object 

int main()
{
    int arr[6] = {1, 3, 4903, 99, 66, 77};
    sort(arr, arr + 6);  // Sort the entire array
    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"\nArray in descending order will be: \n";
    //pasing the function object in sort
    sort(arr,arr+6,greater<int>());
    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}

