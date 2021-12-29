#include<stdio.h>
#include<math.h>

int main(){

    int counter=0,number,sum=0;

    printf("Enter the number: ");
    scanf("%d",&number);

    while (counter<=number)
    {
        sum=sum+counter;
        counter++;
    }

    printf("sum = %d",sum);
    

 return 0;   
}