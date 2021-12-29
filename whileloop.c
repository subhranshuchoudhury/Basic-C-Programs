#include<stdio.h>
#include<math.h>

//initialization, condition, increament or decreament

int main(){

    int counter=1,printer;

    printf("\nHow many times to print: ");
    scanf("%d",&printer);

    while (counter<=printer)
    {
        printf("Subhranshu\n");
        counter++;
    }
    
    return 0;
}