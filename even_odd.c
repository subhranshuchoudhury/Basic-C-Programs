#include<stdio.h>

//even odd counter.

int main(){
    int store[5],i,even=0,odd=0;

    for ( i = 0; i < 5; i++)
    {
        printf("Enter Numbers: ");
        scanf("%d",&store[i]);
    }

    for ( i = 0; i<5; i++)
    {
        if (store[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
        
    }

    printf("Total Even = %d and Total Odd = %d\n",even,odd);

    return 0;
    
    
}