#include<stdio.h>
#include<math.h>

int main(){

    float c,f;
    printf("\nEnter Degree in Celcious ");
    scanf("%f",&c);

    f=(c*9/5)+32;

    printf("In Farenheit is %f",f);

    return 1;
}