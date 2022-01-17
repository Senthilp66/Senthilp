#include <stdio.h>
 
int isPairSum(int A[], int N, int X)
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j)
                continue;
 
            if (A[i] + A[j] == X)
                return 1;
 
            if (A[i] + A[j] > X)
                break;
        }
    }
 
    return 0;
}
 
int main()
{
    int arr[] = { 1, 2, 3, 5, 8, 9, 10, 11 };
    int val = 10;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
 
    if(isPairSum(arr, arrSize, val))
    printf("Pair is there");
    
    else
    printf("No such Pair");
 
    return 0;
}