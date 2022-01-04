//Copy a string
#include<stdio.h>
int main()
{
    int i;
    char a[10],b[10];
    printf("Enter The String:");
    gets(a);
    
    for(i=0;a[i]!='\0';i++)
    b[i]=a[i];
    b[i]='\0';//manually add null in last index of the string.
    
    printf("Copied String: %s",b);
    return 0;
    
}
