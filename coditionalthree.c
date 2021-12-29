#include<stdio.h>
#include<math.h>
//ternary with three opearators
int main(){

    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);

    //max=(a>b&&a>c)?a:b;

    max=(a>b&&a>c)?a:(b>a&&b>c)?b:c;

    //max=(a>b)?a:b; //1st one is true and the second one is false.

    printf("\nMax number is = %d ",max);

    return 1;
}