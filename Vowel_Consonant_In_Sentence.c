#include<stdio.h>
int main()
{
    int i,vowel=0,consonant=0;
    char s[50];
    printf("Enter Your Sentence: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65||s[i]<=90 || s[i]>=97||s[i]<=122)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            vowel++;
            else
            consonant++;
        }
        
    }
    printf("Total Vowel:%d\nTotal Consonant:%d",vowel,consonant);
    return 0;
}
