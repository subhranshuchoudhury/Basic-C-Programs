//open file test.txt and put one character "a".
//in w mode
//used function -> fputc(),fopen(),fclose().
#include <stdio.h>

int main(){
  FILE *fp;
  //fp = fopen("filename","mode");
  fp = fopen("test.txt","w"); //w - write mode, it will overwrite all the existing data.
  fputc('s',fp); //put character c.
  fclose(fp);//close the file.
  return 0;

}
