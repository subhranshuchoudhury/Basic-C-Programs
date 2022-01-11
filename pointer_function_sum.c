//function with pointer.
//addition programme.

#include<stdio.h>
void sum(int *,int *);

int main(){
    int a,b,*p,*q;
    printf("Enter Value A: ");
    scanf("%d",&a);
    printf("Enter Value B: ");
    scanf("%d",&b);
    
    p = &a;
    q = &b;
    
    sum(p,q);
    return 0;
}

void sum (int *p, int *q)
{
    int sum;
    sum = *p + *q;
    printf("SUM: %d",sum);
}
