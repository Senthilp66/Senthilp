#include <bits/stdc++.h>
using namespace std;

void isPairSum(int A[], int n, int X)
{
    int *p,*q;
    
    sort(A,A+n-1);
    p=A;
    q=A+n-1;
    
    while(*p<*q){
        
        if((*p + *q) == X){
        cout<<"Pair is there";
            return ;
        }
        else if((*p + *q) > X)
        q--;
        else
        p++;
    }
 cout<<"No such Pair";
    return ;
}
 
int main()
{
    int arr[] = { 1, 2, 3, 5, 8, 9, 10, 11 };
    int val = 10;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
 
    isPairSum(arr, arrSize, val);
    
    
}