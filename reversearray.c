#include<stdio.h>

int main(){

    int store[5],i;

    for ( i = 0; i < 5; i++)
    {
        printf("Enter Number: ");
        scanf("%d",&store[i]);
    }

    for ( i = 4; i >=0; i--) //for reversing. i>=0 means it goes highest to lowesr index.
    {
        printf("\nIn reverse: %d",store[i]);
    }
    printf("\n");
    return 0;
}