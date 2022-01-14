#include<stdio.h>

int main() {
  char c;
  FILE *fh;//declare file handler.
  //create a file "test.txt" in compiler directory.
  //simply use online compiler (gdb c compiler).
  fh = fopen("test.txt","r");//r-open in read mode.
  while((c=fgetc(fh))!=EOF)
  {
    printf("The Get Value: %c\n",c);
  }
  fclose(fh);//close the open file.
  return 0;
}
