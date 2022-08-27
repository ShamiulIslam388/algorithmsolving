/****
How do you find duplicate numbers in an array if it contains multiple duplicates?
***/
#include<iostream>
using namespace std;

int main()
{
    int arr[]= {1,2,2,3,3,4,5,5,5,6,1};
    int i,j,n;
    int cnt=0;
    n=sizeof(arr)/sizeof(arr[0]);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<"\t";

            }

        }
    }
}
