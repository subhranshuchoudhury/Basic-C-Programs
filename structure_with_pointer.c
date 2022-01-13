//structure with pointer.
#include <stdio.h>

struct data{
  int number;
};

void display(struct data *);

int main(){
  struct data a;
  printf("Enter Number: ");
  scanf("%d",&a.number);
  display(&a);//send the address to pointer.
  return 0;
}
void display(struct data *a){
  printf("Saved: %d",a->number);//the "." changed to "->".

}
