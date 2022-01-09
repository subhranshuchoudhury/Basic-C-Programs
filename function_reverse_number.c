//find reverse of a number using function.
//all the comments line are for understanding concept.j ust ignore them.

#include<stdio.h>

//define prototype of function.

void reverse(int); //here int is called argument.

int main()
{
    int i;
    printf("Enter input: ");
    scanf("%d",&i);
    reverse(i);
    //printf("Main function i value: %d",i);
    //printf("Reversed main function: %d",reverse);
    return 0;
}

void reverse(int i) //this i is isolated from the main function.
{
    //i=i+2;
    //printf("reverse function value: %d",i);
    
    //algorithm for reverse.
    int reverse=0; //it has no impact on main function.
    
    while(i>0)
    {
        reverse = (reverse*10)+i%10;
        i=i/10;
    }
    
    printf("Reversed Number: %d",reverse);
    
}
