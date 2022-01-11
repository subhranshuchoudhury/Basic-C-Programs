//pointer datatype should same as variable datatype to store address properly.

#include<stdio.h>
int main()
{
    int num,*p; //*p: pointer
    printf("Enter the number: ");
    scanf("%d",&num);
    p=&num;
    if(*p%2==0) //*p: here this is called "value at p".
    printf("\n--> Even!");
    else
    printf("--> Odd!");
    return 0;
}
