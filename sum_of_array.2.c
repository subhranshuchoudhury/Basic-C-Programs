#include<stdio.h>
#include<math.h>

int main()
{
    int store[3][3],i,j,sum=0;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter the number: ");
            scanf("%d",&store[i][j]);
        }
        
    }

    printf("\nThe 2D Array is: \n");

    for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",store[i][j]);
            sum=sum+store[i][j];
        }
        
    }

    printf("\nTotal sum: %d\n",sum);
    
    
}