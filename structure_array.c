//array multiple data input.
#include <stdio.h>
struct studentdata {
  int roll;
  char name[10];
  int month_fees;
};

int main()
{
  struct studentdata a[3];
  int i;
  for (i=0;i<3;i++){
    printf("--> STUDENT RECORD NO: %d\n\n",i+1);
    printf("---------------------------\n");
    printf("Enter ROLL: ");
    scanf("%d",&a[i].roll);
    printf("Enter NAME: ");
    scanf("%s",a[i].name);
    printf("Enter FEES: ");
    scanf("%d",&a[i].month_fees);
    printf("---------------------------");
    printf("\n\n");
  }

  //print the student data.
  printf("--:RECORDS:-- \n\n\n");

  for (i=0;i<3;i++) {
    printf("ROLL NO: %d\tNAME: %s\tFEES: %d\n",a[i].roll,a[i].name,a[i].month_fees);
  }


  return 0;

}
