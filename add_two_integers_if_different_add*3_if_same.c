#include<stdio.h>

int main()
{
  int a,b,c;
  scanf("%d%d",&a,&b);
  c= a==b ? (a+b)*3:a+b; //condition?true_statement:false_statement;

  printf("Value: %d",c);
  return 0;

}
