#include<stdio.h>
#include<math.h>

int main(){

    int a,b,max;
    scanf("%d%d",&a,&b);

    max=(a>b)?a:b; //1st one is true and the second one is false.

    printf("Max number is = %d ",max);

    return 1;
}