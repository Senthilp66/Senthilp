#include<bits/stdc++.h>
using namespace std;

void getOddOccurrence(int a[],int n)
{
    int temp=0;
    
    for(int i=0;i<n;i++)
        temp=temp^a[i];
    
    cout<<temp;
}

int main()
{
    int arr[]={1,4,5,6,3,4,1,3,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    getOddOccurrence(arr,size);
}