//call by value- when we pass value in argument.
//eg. void function_name(int, int);
//call by reference- when we pass address as an argument.
//eg. void funtion_name(int *, int *);
//call by reference can overwrite the value which is in main function.
//call by value has send a copy from main function to sub-function. hence
//no effect of modification in main function value.

#include<stdio.h>
void call_by_value(int);

int main()
{
    int a;
    //let a = 10.
    a=10;
    
    call_by_value(a);
    //print the value which is in main function.
    printf("Value of a in main function: %d\n--> Hence there is no affect of modification in main function.",a);
    return 0;
}



void call_by_value(int a)
{
    //lets modify the value of a.
    a=a+1;
    printf("Value of a in sub-function function: %d\n",a);
    //here now a is 11.
}
