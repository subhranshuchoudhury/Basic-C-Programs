
//Transpose of Matrix.

#include <stdio.h>

int main()
{
    int matrix[3][3],i,j;
   
    //input data to matrix.
   
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the number to store in matrix: ");
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
   
    //Transpose the saved matrix.
   
    printf("\nThe Transpose of the Matrix is: ");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrix[j][i]); //this is for changing row to column vice versa.
        }
    }

    return 0;
}
