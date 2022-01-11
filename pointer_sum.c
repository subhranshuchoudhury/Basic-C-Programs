//addition using pointer.
//declare pointer by using "*" before them. eg. int *p;
//only use * while declaring variable.
//pointer only store address.
#include<stdio.h>
int main()
{
    int a,b,c,*p,*q;
    
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    
    //giving address value of a and b to pointers.
    
    p=&a; //assign address of a to pointer p.
    q=&b;
    
    //adding the address values.
    c=*p+*q;
    
    printf("Sum Using Pointers: %d",c);
    
    return 0;
}
