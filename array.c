//datatype array_name[size];
//collection of similar type of data.
//indexing 0 to n-1 (if n=size).
//continous memory allocation.
//assign value or addressing eg* "a[0]=100"
//for loop should used here.

#include<stdio.h>
int main()
{
    int a[10],i;
    for (i=0;i<10;i++) //it save ten array values in every packet.
    {
        printf("Enter number to save :");
        scanf("%d",&a[i]);
    }

    printf("Arrays saved are: ");

    for (i=0;i<10;i++)
    {
        printf("\n%d",a[i]);
    }

    return 0;
    

    

    
}