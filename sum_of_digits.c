#include<stdio.h>
#include<math.h>

int main(){

    int number,sum=0;

    printf("Enter the Number: ");
    scanf("%d",&number);

    while (number>0)
    {
        sum=sum+number%10; //ignores the float values.
        number=number/10; //decrease the places of the number.
    }

    printf("The Sum of digits is: %d\n",sum);
    

 return 0;   
}