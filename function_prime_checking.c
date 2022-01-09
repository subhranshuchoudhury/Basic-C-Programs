//prime number checking using function.

#include<stdio.h>

void prime(int);

int main()
{
    int num;
    printf("Enter Input: ");
    scanf("%d",&num);
    prime(num);
    return 0;
}

void prime(int number) //independent of main function. num=number.
{
    int count=0,x;
    for (x=1;x<=number;x++) {
        if(number%x==0)
        {
            count++;
        }
    }
    
    if(count>2)
    printf("This is not prime.");
    else
    printf("This is prime.");
}
