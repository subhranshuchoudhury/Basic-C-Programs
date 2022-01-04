//Upper or Lower Triangular of Matrix.


#include <stdio.h>

int main()
{
    int matrix[3][3],i,j,flag=0,flag2=0;
   
    //input data to matrix.
    printf("INPUT DATA IN THE MATRIX :\n");

   
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
   
   
   
    //Upper Triangular or Lower Triangular Matrix checking.
   
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    if(i>j&&matrix[i][j]==0)
    flag++;
   
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    if(i<j&&matrix[i][j]==0)
    flag2++;
   
   
   
    //Result display.
   
    printf("\nResult is: ");
   
    if(flag2<3 && flag<3)
    printf("Not Lower or Upper.");
   
    if(flag==3)
    printf("Upper Triangular Matrix.");
   
    if(flag2==3)
    printf("Lower Triangular Matrix.");
   

    return 0;
}
