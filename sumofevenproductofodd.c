#include<stdio.h>

int main(){

    int store[5],i,sum=0,product=1;

    for ( i = 0; i < 6; i++)
    {
        printf("Enter number: ");
        scanf("%d",&store[i]);
    }

    for ( i = 0; i < 6; i++)
    {
        if (store[i]%2==0)
        {
            sum=sum+store[i];
        }

        else
        {
            product=product*store[i];
        }
        
        
    }

    printf("sum of even is: %d , product of odd is: %d",sum,product);
    
    
}