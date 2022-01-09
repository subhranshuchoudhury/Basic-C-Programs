//No argument no return. Add two number using function.
#include<stdio.h>
//prototype: return_type function_name (argument);
void addition(void);
int main()
{
  addition(); //call the function.
  return 0;
}
//definition of prototype

void addition (void) //remove semicolon.
{
  int a,b;
  printf("Enter number:");
  scanf("%d%d",&a,&b);
  printf("addition is:%d",a+b);
}
