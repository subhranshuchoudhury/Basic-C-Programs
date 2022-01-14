#include<stdio.h>

int main()
{
  FILE *fh;
  char str[100];
  fh = fopen("filename.txt","r");
  
  printf("Retrieved Text: ");
  while (fscanf(fh,"%s",str)!=EOF) //EOF: end of file.(keyword).
  {
    printf("%s ",str);// added space to string("%s ") for better output.
  }

  fclose(fh);
  return 0;
}
