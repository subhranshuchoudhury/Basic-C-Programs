#include<stdio.h>
int main (){

    int store[5],i,flag=0,pos,key;

    for ( i = 0; i < 5; i++)
    {
        printf("Enter Your Number: ");
        scanf("%d",&store[i]);
    }

    printf("Enter Number To Search: ");
    scanf("%d",&key);

    for ( i = 0; i < 5; i++)
    {
        if (store[i]==key)
        {
            pos=i+1;
            flag=1;
            break; //terminator, use it if you want search only one index position.

        }
        
    }

    if (flag==1)
    {
        printf("Number Found at Position = %d",pos);
    
    }
    else
    {
        printf("Number Not Found.");
    }
    
    return 0;
    
}