#include <stdio.h>
#include <ctype.h>

int main()
{
    char input;
    
    printf("Enter the character: ");
    scanf("%c",&input);
    printf("The Input Data Is: \n");
    
    //isalpha()
    if(isalpha(input))
    printf("isalpha true.");
    
    //isdigit()
    if(isdigit(input))
    printf("isdigit true.");
    
    //isalnum
    if(isalnum(input))
    printf("isalnum true.");
    
    //isspace
    if(isspace(input))
    printf("isspace true.");
    
    //islower
    if(islower(input))
    printf("islower true.");
    
    //isupper
    if(isupper(input))
    printf("isupper true.");
    
    //tolower
    printf("To Lower: %c.",tolower(input));
    //toUpper
    printf("To Upper: %c.",toupper(input));

    return 0;
}
