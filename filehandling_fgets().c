#include <stdio.h>

int main()
{
  FILE *fh;
  char str[100];//this is per one printf use.
  
  fh = fopen("filename.txt","r");
  //fgets("char_name","number_scan",fh);
  
  while((fgets(str,100,fh))!=NULL){
    
    //it can print multiline text. but limit is 100.
    printf("%s",str);
  }
  fclose(fh);
  
  return 0;
}
