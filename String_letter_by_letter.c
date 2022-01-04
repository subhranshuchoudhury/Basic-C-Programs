#include<stdio.h>
int main()
{
    char name[50];
    int i=0;
    printf("Enter Your Name: ");
    gets(name); //this will allow to store full word.
    printf("Your name is %s.",name);
    printf("\nLetter By Letter: ");
    while(name[i]!='\0')//bcz the last index is inputed "\0" by self computer.
    {
        printf("\n%c",name[i]);
        i++;
    }
    return 0;
}
