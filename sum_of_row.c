//sum of row and column.

#include<stdio.h>

int main()
{
    int store[3][3],i,j,sum=0;

    //input.
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter the number: ");
            scanf("%d",&store[i][j]);
        }
        
      }
      
      printf("\n2D ARRAY:\n");


    for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",store[i][j]);
        }
        
    }

    //operation.
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            sum=sum+store[i][j]; //row.
              
        }
        printf("\nSum Of Row Number %d: %d\n",i+1,sum);

        
    }

    sum=0; //resetting the value for column.

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            sum=sum+store[j][i]; //column.
        }

        printf("\nSum Of Column Number %d: %d\n",i+1,sum);

        
    }
    return 0;

}