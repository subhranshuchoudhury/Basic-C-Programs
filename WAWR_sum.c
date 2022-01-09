//with argument with return.
#include<stdio.h>
int add(int,int);//prototype.

int main()
{
    int a,b,sum;
    printf("Enter number:");
    scanf("%d%d",&a,&b);
    sum= add(a,b);
    printf("SUM is: %d",sum);
    return 0;
}

int add(int a,int b)
{
    int c=a+b;
    //printf("SUM: %d",c);
}
