/*******
How do you find the missing number in a given integer array of 1 to 100?
*******/
#include<iostream>
using namespace std;

int missing(int arr[],int n)
{
    int totalArr,missing_number;
    int sum_off_element=0;
    totalArr=n*(n+1)/2;
    for(int i=0; i<n-1; i++)
    {
        sum_off_element += arr[i];
    }

    missing_number=totalArr-sum_off_element;
    return missing_number;
}

int main()
{
    int missing_number,n;
    int arr[]= {1,2,3,4,5,7,8,9};
    n=sizeof(arr)/sizeof(arr[0]);
    missing_number = missing(arr,n+1);
    cout<<"missing number is: "<<missing_number;
    return 0;
}
