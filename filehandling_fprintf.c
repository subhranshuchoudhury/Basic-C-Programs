//open test.txt and print hello world into the file and close it.
//in w mode -- overwrite everything.
//used function -> fprintf(),fopen(),fclose().
#include <stdio.h>

int main(){
  //FILE *{function_name};
  FILE *fp;
  
  //fp = fopen("filename","mode");
  fp = fopen("test.txt","w"); //w - write mode, it will overwrite all the existing data.
  
  //fprintf(fp,"filename"); here 1st fp and filename in 2nd.
  fprintf(fp,"Hello World!");//it will print helloworld into the file.
  
  printf("Done!");
  
  fclose(fp);//close the file.
  
  return 0;

}
