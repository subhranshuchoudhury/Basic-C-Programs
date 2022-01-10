//Sum of array using function.
//with argument no return

#include <stdio.h>
void arraysum(int[],int); //1st one is array and 2nd one is for size of the array.

int main()
{
    int store[100],size,i;
    printf("\nEnter Size of array: ");
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        printf("\nEnter Number: ");
        scanf("%d",&store[i]);
        
    }
    
    arraysum(store,size); //call the function.
    return 0;
}

//funtion part.

void arraysum (int store[],int size) //you can define any variable.
{
    int sum=0,i;
    for(i=0;i<size;i++)
    {
        sum+=store[i];
    }
    
    printf("\n---> Sum of array: %d",sum);
    
}
