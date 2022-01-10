//matrix addition using function.
//WANR
#include<stdio.h>
void addmatrix(int[][100],int[][100],int); //rc=row and column.

int main()
{
    int a[100][100],b[100][100],rc,i,j;
    printf("Enter Number Of Row & Cloumn: ");
    scanf("%d",&rc);
    for(i=0;i<rc;i++)
    for(j=0;j<rc;j++)
    {
        printf("Enter Data For (Matrix-1): ");
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<rc;i++)
    for(j=0;j<rc;j++)
    {
        printf("Enter Data For (Matrix-2): ");
        scanf("%d",&b[i][j]);
    }
    
    addmatrix(a,b,rc);
    return 0;
}

void addmatrix(int a[][100],int b[][100],int rc)
{
    int i,j,c[100][100];
    for(i=0;i<rc;i++)
    for(j=0;j<rc;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
    
    printf("The Final Matrix is: ");
    
    for(i=0;i<rc;i++)
    {
        printf("\n");
        for(j=0;j<rc;j++)
    {
        printf("%d\t",c[i][j]);
    }
    }
    
    
}
