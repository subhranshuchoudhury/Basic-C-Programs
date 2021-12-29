//for loop
//for(initialization;condition;increment/decrement)

#include<stdio.h>
#include<math.h>

int main(){
    int counter,number;
    printf("\nEnter The Number: ");
    scanf("%d",&number);

    for (counter=1;counter<=number;counter++)
    {
        printf("\ni printed.");
    }

    printf("\n");
    
    return 0;


}