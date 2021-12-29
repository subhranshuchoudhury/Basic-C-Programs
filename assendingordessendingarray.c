//sort the array list.
//link: https://www.youtube.com/watch?v=b9xWoCCpzl0&list=PLmRclvVt5DtksgReOH3s7R1_cb1QA8vrb&index=57

#include<stdio.h>
#include<math.h>

int main(){

    int store[5],i,j,swapper;

//this is for input numbers.
    for ( i = 0; i < 5; i++)
    {
        printf("Enter Number: ");
        scanf("%d",&store[i]);
    }

    //checking greatest numbers.

    for ( i = 0; i < 4; i++) //4 bcz j=i+1.
    {
        for ( j = i+1; j < 5; j++)
        {
            if (store[i]>store[j]) //">" only for accending ( sana ru -- bada )
            {
                //swapping values for assending.
                swapper = store[i];
                store[i]=store[j]; //restoring modified value in i.
                store[j]=swapper; //swapping completed.

            }
            
        }
        
    }

    printf("Assending Value is: ");//printing the accesnding values.
    for ( i = 0; i < 5; i++)
    {
        printf("\n%d",store[i]);
        

    }
    printf("\n");

    return 0;
    
    
    
}