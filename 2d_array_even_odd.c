#include<stdio.h>
#include<math.h>

int main(){
    int store[3][3],i,j,even=0,odd=0;

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



    //operation code. //for showing in matrix form and checking even or odd.

    for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)

        {
            printf("%d\t",store[i][j]);
            //printf("\n");

            if (store[i][j]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    
    
        
        
        
        }

    }
    

    printf("\nTotal EVEN is: %d\nTotal ODD is: %d\n",even,odd);
    
    


    return 0;


}