//Add two different matrix. The logic is to add same index. and store the value in another matrix.

#include<stdio.h>
int main()
{
    int mata[3][3],matb[3][3],matc[3][3],i,j;
    //printf("MATRIX A:");

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\nEnter the Number: ");
            scanf("%d",&mata[i][j]);

        }
        
    }

    printf("\n");

    printf("MATRIX - A IS: \n");
    for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",mata[i][j]);
            
        }
        
    }

    printf("\n");
    

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter the Number: ");
            scanf("%d",&matb[i][j]);

        }
        
    }
    printf("\nMATRIX - B IS: \n");
    for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",matb[i][j]);
            
        }
        
    }

    

    //LOGICAL SECTION:

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            matc[i][j]=mata[i][j]+matb[i][j];
        }
        
    }

    printf("\nAddition of Matrix is: \n");
    for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",matc[i][j]);
            
        }
        
    }

    printf("\n");
    



    return 0;
    
}
