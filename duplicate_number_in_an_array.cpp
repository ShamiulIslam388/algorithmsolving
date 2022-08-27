/*******
How do you find the duplicate number on a given integer array?
*******/
#include<iostream>
using namespace std;


int main()
{
    int missing_number,n;
    int arr[]= {1, 2, 3, 4, 2, 7, 8, 8, 3};
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Duplicate numbers are: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
                cout<<arr[j]<<endl;
        }
    }
    return 0;
}
