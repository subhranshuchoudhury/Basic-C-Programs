//lets multiply :)

#include<stdio.h>
int main()
{
    int mata[3][3],matb[3][3],matc[3][3],i,j,k;
    //printf("MATRIX A:");

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter the Number: ");
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
    //not programmed for muti*


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            matc[i][j]=0;
            for(k=0;k<3;k++)
            {

                matc[i][j]+=mata[i][k]*matb[k][j];

            }

        }

    }





          //show multiplication.

    printf("\n\nMultiplication of Matrix is: \n");
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
