#include<bits/stdc++.h>
using namespace std;

int getOddOccurrence(int O[], int arr[], int arr_size)
{    
    for (int i = 0; i < arr_size; i++) {
        
        int count = 0;
        
        for (int j = 0; j < arr_size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 != 0){
            
            for (int j = 0; j < arr_size; j++)
                if(arr[i] == O[j])
                    return 1;
            O[i] = arr[i];     
            cout << arr[i] << endl;
        }
     
    }
    return 0;
}

int main()
    {
        int arr[] = { 1,2,3,5,5,2,3,5,3,2,3,2,3 };
        int n = sizeof(arr) / sizeof(arr[0]);
        int O[n]={};
         
        getOddOccurrence(O, arr, n);

        return 0;
    }