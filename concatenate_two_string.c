//concatenate two string.
#include<stdio.h>
int main()
{
    int i,j;
    char a[50],b[50],c[100];
    printf("Enter 1st String:");
    gets(a);
    printf("Enter 2nd String:");
    gets(b);
    
    for(i=0;a[i]!='\0';i++)
    c[i]=a[i];
    for(j=0;b[j]!='\0';j++)//indexing with j bcz it protects from overwrite.
    {
        c[i]=b[j];
        i++;//for add in new index after the previous string 'a'.
    }
    
    c[i]='\0';//manually add null.
    
    printf("Concatenated String:%s",c);
}
