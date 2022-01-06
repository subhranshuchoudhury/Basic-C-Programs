#include <stdio.h>
#include <string.h>

int main()
{
    char input[50],input2[50],savestring[50];
    int i;
    
    printf("Enter 1st String: ");
    gets(input);
    //save the 1st string bcz we use strcpy before strcmp. 
    //do this or you can just write strcpy after strcmp :)
    
    for(i=0;input[i]!='\0';i++)
    savestring[i]=input[i];
    savestring[i]='\0';//manually add null in last index of the string.
    
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
    //strcmp() - string compare.
    //returns integer values.
    if(strcmp(savestring,input2)==0)
    printf("\nstring are equal.");
    else if(strcmp(savestring,input2)>0)
    printf("\n1st string is larger.");
    else if(strcmp(savestring,input2)<0)
    printf("\n2nd string is larger.");

    return 0;
}
