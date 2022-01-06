//string pallindrome.
#include<stdio.h>
#include<string.h>

int main()
{
    int i,j=0,alert=0;
    char str1[50],str2[50];
    
    printf("Enter 1st string:");
    gets(str1);
    
    //storing the 1st string value in 2nd string.
    for(i=strlen(str1)-1;i>=0;i--)
    {
        str2[j]=str1[i];
        j++;
    }
    
    //checking for pallindrome.
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            alert++;
            break;
        }
    }
    
    if(alert!=0)
    printf("Not pallindrome.");
    else
    printf("Yes pallindrome.");
    
    return 0;
}

// pallindrome means its reverse is also same as the original word.
// like madam, its reverse also madam.
