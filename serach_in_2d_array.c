#include<stdio.h>
#include<math.h>

int main()
{
    int store[3][3],i,j,flag=0,search;
//input.
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter the number: ");
            scanf("%d",&store[i][j]);
        }
        
    }

    printf("Enter The Number to Search: ");
    scanf("%d",&search);
    printf("\nThe 2D Array is: \n");
//show input.
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
        for ( j = 0; j< 3; j++)
        {
            if (store[i][j]==search)
            {
                flag++;
                printf("\nPOSITION: [%d][%d]\n",i,j);
            }
        }
        
    }
    printf("\nTotal Flags: %d",flag);

    return 0;
    
    
}