/*Structure -- syntax struct, structure is used to store multiple datatypes in one variable. to use it 
we have to type variable_name.datatype_name = "value" or usually use scanf to store value.*/

#include <stdio.h>
//#define MC 20
struct empdata{
  int ID;
  char NAME[20];
  int SLRY;
}; //semicolon compulsory.

int main(){
  struct empdata a; //a--> variable, struct empdata --> data type. you can aslo declare more variables at once.

  printf("Enter EMP ID: ");
  scanf("%d",&a.ID);
  printf("Enter EMP NAME: ");
  scanf("%s",a.NAME); //take input.
  //fgets(a.NAME, MC, stdin);
  printf("Enter EMP ID: ");
  scanf("%d",&a.SLRY);

  //print all the inputs.

  printf("\n\nEMPLOYEE ID: %d\nEMPLOYEE NAME: %s\nEMPLOYEE SALARY: %d",a.ID,a.NAME,a.SLRY); //show output.

  return 0;
}
