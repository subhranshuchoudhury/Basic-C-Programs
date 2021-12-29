#include<stdio.h>

int main(){

    int a,b,c;
    printf("\nEnter Three numbers with space: ");

    scanf("%d%d%d",&a,&b,&c);

    if (a>b && a>c)
    {
        printf("%d is largest",a);
    }
    else if (b>c && b>a)
    {
        printf("%d is greatest.",b);
    }
    else
    {
        printf("%d is greatest.",c);
    }
    
    return 0;
    
}