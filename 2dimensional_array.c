//used for solving matrix like problems.
//also called multi-dimensional array.
//priority row major or column major.
//rows are like x-axis.
//column are like y-axis.
//link: https://www.youtube.com/watch?v=h-Hgm-_M4jQ&list=PLmRclvVt5DtksgReOH3s7R1_cb1QA8vrb&index=59

#include<stdio.h>

int main(){
    int store[3][3],i,j;

    //accepting values and store in matrix form.
    //i refers to row, and j refers to column.

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter Array Value: ");
            scanf("%d",&store[i][j]);
        }
        
    }

    printf("\n"); //styling.c

    printf("Array in Matrix(2D) Format: ");
    for ( i = 0; i < 3; i++)
    {
        printf("\n"); //for printing row in new line.
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",store[i][j]); //\t is for Tab.
        }
        
    }

    printf("\n"); //only for styling.
    

    return 0;
    
}
