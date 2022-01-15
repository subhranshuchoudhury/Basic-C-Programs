//when a function call by itself it is called recursion.
#include<stdio.h>
int factorialfinder(int);
int main()
{
  int num,answer;
  printf("Enter number to find factorial: ");
  scanf("%d",&num);
  answer = factorialfinder(num);
  printf("\n\n--> factorial of %d is %d.",num,answer);
  return 0;

}

int factorialfinder(int n) //let n value = 4.
{
  int f;
  if(n==0)
  return 1;//to break the operation when n value is 0.
  else
  f = n*factorialfinder(n-1);//to reduce n by 1. means factorial(4)=4*3*2*1 = 24.

  //it is for returning the value to answer.
  return f;

}
