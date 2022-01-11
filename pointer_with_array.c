//pointer in array.
//asign 1st address of the array to pointer.
//eg. p = a[0]; or p = a;
//array- continous memory allocation.
#include <stdio.h>
int main()
{
    int store[5],i,*p;
    
    for(i=0;i<5;i++)
    {
        printf("Enter Number: ");
        scanf("%d",&store[i]);
    }
    
    //connecting the 1st address to pointer.
    p = &store[0]; //[0] is the 1st address.
    
    
    printf("Pointer Value: ");
    for(i=0;i<5;i++)
    {
        
        printf("%d",*(p+i));
    }
    return 0;
}
