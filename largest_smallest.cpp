/*******
How do you find the largest and smallest number in an unsorted integer array?
*******/
#include<iostream>
using namespace std;


int main()
{
    int n,i,minimum,maximum;
    int arr[]= {0, 2, 3, 47, 5, 6,7};
    n=sizeof(arr)/sizeof(arr[0]);
    for(i=0; i<n; i++)
    {
        if(minimum>arr[i])
        {
            minimum=arr[i];
        }
        if(maximum<arr[i])
        {
            maximum=arr[i];
        }

    }

    cout<<"smallest number is: "<<minimum<<endl;
    cout<<"largest number is: "<<maximum<<endl;
    return 0;
}

