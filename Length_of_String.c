#include<stdio.h>
int main()
{
    char name[50];
    int i=0,j=0;
    printf("Enter Your Name: ");
    gets(name); //this will allow to store full word.
    while(name[i]!='\0')//bcz the last index is inputed "\0" by self computer.
    {
        if(name[i]==' ')
        {
            j++;
            i++;
        }
        else
        i++;
    }
    
    i-=j;
    
    printf("Total length is %d.",i);
    return 0;
}
