#include<stdio.h>

int main(){

    int store[5],i;

    for ( i = 0; i < 5; i++)
    {
        printf("Enter Number: ");
        scanf("%d",&store[i]);

    }

    for ( i = 0; i < 5; i=i+2) //i=i+2 is for showing alternate number.
    {
        printf("\nAlternate Numbers are: %d",store[i]);
        
    }

    printf("\n");//for decoration :)

    return 0;
    
    
}