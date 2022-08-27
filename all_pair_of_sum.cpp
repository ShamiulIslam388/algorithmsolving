/****
How do you find all pairs of an integer array whose sum is equal to a given number?
***/

#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,1,1,1};
    int sum,n,i,j,cnt;
    sum=2;
    cnt=0;
    n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                cnt++;
            }
        }
    }
    cout<<"Number of pairs are: "<<cnt<<endl;

}
