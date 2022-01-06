#include <stdio.h>
#include <string.h>

int main()
{
    int i,j=0;
    char string[50],revstring[50];
    printf("Enter String:");
    gets(string);
    
    for(i=strlen(string)-1;i>=0;i--)
    {
        revstring[j]=string[i];
        j++;
    }
    revstring[j]='\0';
    
    printf("Reverse String:%s",revstring);
    
    return 0;
  
}
