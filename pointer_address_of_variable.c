//pointer: physical memory address of variable.
#include<stdio.h>
int main()
{
    int a=1,b=2;
  //show address of a & b.
    printf("The Address of A is: %x\nThe address of B is: %x",&a,&b);
    return 0;
}
