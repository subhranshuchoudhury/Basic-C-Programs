
//Equality of Matrix.

#include <stdio.h>

int main()
{
    int matrix[3][3],matrixb[3][3],i,j,flag=0;
   
    //input data to matrix.
    printf("Matrix A:\n");

   
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("INPUT: ");

            scanf("%d",&matrix[i][j]);
        }
    }
   
    //show stored data.
    printf("\nThe Saved matrix is: ");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
    }
   
    //input for 2nd matrix.
    printf("\nMatrix B:\n");

   
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("INPUT: ");
            scanf("%d",&matrixb[i][j]);

        }
    }
   
    //show stored data.
    printf("\nThe Saved matrix is: ");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrixb[i][j]);
        }
    }
   
    //Equality checking:
   
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        if(matrixb[i][j]==matrix[i][j])
        {
            flag++;
        }
    }
   
    //Result display.
   
    if(flag==9)
    printf("\nMatrix are Identical.");
    else
    printf("\nMatrix are not Identical.");

    return 0;
}
