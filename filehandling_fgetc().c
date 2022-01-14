#include<stdio.h>

int main() {
  char c;
  FILE *fh;//declare file handler.
  if(fh==NULL)
    printf("File not exist. Pls create the file.");
  //create a file "test.txt" in compiler directory.
  //add a simple word in that file. eg.good
  //simply use online compiler (gdb c compiler).
  fh = fopen("test.txt","r");//r-open in read mode. NOTE: Must Create a file names "test.txt".
  while((c=fgetc(fh))!=EOF)
  {
    printf("%c",c);
    //it will print the text inside the "test.txt" file.
  }
  fclose(fh);//close the open file.
  return 0;
}
