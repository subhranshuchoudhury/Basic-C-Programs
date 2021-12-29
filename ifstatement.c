#include<stdio.h>
#include<math.h>
int main()
{
    int age;

    printf("\nEnter age:");
    scanf("%d",&age);

    if (age>17)
    {
        printf("You are Eligible for Voting.");
    }
    else
    {
        printf("Sorry You are not eligible.");
    }

    return 0;
    
    


}