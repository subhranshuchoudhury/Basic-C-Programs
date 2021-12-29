#include<stdio.h>
int main()
{
    int a[5],i,counter=0,key; //initialization

    for (i=0;i<5;i++) //it save ten array values in every packet.
    {
        printf("Enter number to save :");
        scanf("%d",&a[i]);
    }

    printf("Enter Number to Search: ");
    scanf("%d",&key);

    for ( i = 0; i < 5; i++)
    {
        if (a[i]==key)
        {
            counter++;
        }
        
    }

    if (counter>0)
    {
        printf("Total Frequency is: %d",counter);
    }
    else
    {
        printf("Number Not Found.");
    }
    
    
    return 0;

}