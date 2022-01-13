//union- it assign the highest value to itself .
//structure- it assign the total value to itself.

#include <stdio.h>
union data{ //sure it will 2 byte.
  int num;
  char ignore;
}a;

int main(){
  printf("Enter Number: ");
  scanf("%d",&a.num);
  printf("Saved: %d",a.num);
  printf("\nTotal Size: %d byte.",sizeof(a));
  return 0;
}
