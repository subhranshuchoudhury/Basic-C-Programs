#include<stdio.h>

int main()
{
    int store[5],i,sum=0;

    for (i=0;i<5;i++)
    {
        printf("Enter Numbers To sum: ");
        scanf("%d",&store[i]);
    }

    for (i=0;i<5;i++)
    {
        sum=sum+store[i];
    }

    printf("Sum is: %d",sum);
    
    
}