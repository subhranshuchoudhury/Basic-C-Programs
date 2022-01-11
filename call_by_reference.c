//call by value- when we pass value in argument.
//eg. void function_name(int, int);
//call by reference- when we pass address as an argument.
//eg. void funtion_name(int *, int *);
//call by reference can overwrite the value which is in main function.
//call by value has send a copy from main function to sub-function. hence
//no effect of modification in main function value.

#include<stdio.h>

void call_by_reference(int *);

int main()
{
    int a,*p;
    //let a = 10.
    a=10;
    //give the address to pointer.
    p = &a;
    
    
    printf("Value of a before operation in sub function: %d\n",*p);
    call_by_reference(p);
    printf("Value of a after operation in sub function: %d",*p);
    printf("\nHence Value overwrote.");
    return 0;
}



void call_by_reference(int *p)
{
    *p = *p+1;
    //print the modified value.
    printf("Value in sub-function: %d\n",*p);
}
