//Sum of array using function.
//with argument with return

#include <stdio.h>
int arraysum(int[],int); //1st one is array and 2nd one is for size of the array.

int main()
{
    int store[100],size,i,value=0;
    printf("\nEnter Size of array: ");
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        printf("\nEnter Number: ");
        scanf("%d",&store[i]);
        
    }
    
    value = arraysum(store,size); //call the function.
    printf("TOTAL SUM: %d",value);
    return 0;
    
}

//funtion part.

int arraysum (int store[],int size) //you can define any variable.
{
    int sum=0,i;
    for(i=0;i<size;i++)
    {
        sum+=store[i];
    }
    
    return (sum);
    
}
