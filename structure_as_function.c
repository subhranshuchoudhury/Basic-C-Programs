//structure as a function argument.

#include <stdio.h>
struct onedata{
  int id;
};

void display(struct onedata);//prototype.
int main(){
  struct onedata a;
  printf("Enter ID: ");
  scanf("%d",&a.id);
  display(a);
  return 0;

}
void display(struct onedata a){
  printf("Saved Id: %d",a.id);
}

//remember why you started.
