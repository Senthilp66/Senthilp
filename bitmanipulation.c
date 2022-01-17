#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int x)
{
    return (x && !(x & (x - 1)));
}

int count_one (int n)
    {   
        int count=0;
        while( n )
        {
        n = n&(n-1);
           count++;
        }
        return count;
}

bool check (int N)
{   
    int i;
    printf("\nEnter the postion to check :");
    scanf("%d",&i);
    if( N & (1 << i) )
        return true;
    else
        return false;
}

long largest_power(long N)
{
    N = N| (N>>1);
    N = N| (N>>2);
    N = N| (N>>4);
    N = N| (N>>8);

            return (N+1)>>1;

}

int main()  {
     int n;
     printf("Enter the number to check : ");
     scanf("%d",&n);
     
     if(isPowerOfTwo(n))
        printf("The number is power of 2");
     else
        printf("\nThe number is not power of 2");
     
     printf("\nNumber of ones in given number : %d",count_one (n));
     
     if(check (n))
        printf("1 is present at given position");
     else
        printf("1 is not present at given position");
     
     printf("\nThe largest power of a number : %ld",largest_power(n));
     
     
     return 0;
       
}