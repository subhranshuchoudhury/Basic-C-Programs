#include<stdio.h>
#include<math.h>

int main(){
    int store[3][3],i,j;

    //accepting values and store in matrix form.
    //i refers to row, and j refers to column.

    for ( i = 0; i < 3; i++)
    {                                //for acceptiong values.
        for ( j = 0; j < 3; j++)
        {
            printf("Enter Array Value: ");
            scanf("%d",&store[i][j]);
        }
        
    }



    //operation code.

    printf("Left Diagonal Elements are: \n");

    for ( i = 0; i < 3; i++)
    {
        
        for ( j = 0; j < 3; j++)

        {
            
            
            if (i==j)//left diagonal elemets.
            {
                printf("%d\t",store[i][j]);
            }
            
        
        }

    }

    printf("\nRight Diagonal Elements are: \n");

    for ( i = 0; i < 3; i++)
    {
        
        for ( j = 0; j < 3; j++)

        {
            
            
            if (i+j==2)//right diagonal elemets. as matrix is 2x2 then i+j should equal to 2 in indexing.
            {
                printf("%d\t",store[i][j]);
            }
            
        
        }

    }
    

   
    
    printf("\n");


    return 0;


}