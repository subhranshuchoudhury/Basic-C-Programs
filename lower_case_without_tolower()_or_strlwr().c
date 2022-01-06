#include <stdio.h>

int main()
{

	char str[50];
	int i;
	
	printf("enter character only in upper case-");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
	    str[i]=str[i]+32;
	}
	
	printf("\nin lower:%s",str);

	return 0;
}
