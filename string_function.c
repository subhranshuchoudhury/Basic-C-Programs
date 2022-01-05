#include <stdio.h>
#include <string.h>

int main()
{
    char input[50],input2[50];
    
    printf("Enter 1st String: ");
    gets(input);
    printf("Enter 2nd String: ");
    gets(input2);
    printf("String Functions Are: \n");
    
    //strlen()
    printf("\nstring length:%d",strlen(input));
    printf("\nstrinf length:%d",strlen(input2));
    //strcat()
    strcat(input,input2);
    printf("\nstring concatenate:%s",input);
    //strcpy()
    strcpy(input,input2);
    printf("\nstring copied from input2:%s",input);
    //strcmp()
    
    
    
    
    
    
    
    
    

    return 0;
}
