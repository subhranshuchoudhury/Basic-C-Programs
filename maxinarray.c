#include<stdio.h>
#include<math.h>

int main()
{
    int store[10],i,max=0;
    for (i=0;i<10;i++) //it save ten array values in every index.
    {
        printf("Enter number to save :");
        scanf("%d",&store[i]);
    }

    //max checking

    for ( i = 0; i < 10; i++)
    {
        if (store[i]>max)
        {
            max=store[i];

        }
        
    }

    printf("The Max Number is: %d",max);
    
    return 0;

}