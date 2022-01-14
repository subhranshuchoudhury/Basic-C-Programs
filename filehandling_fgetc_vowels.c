#include<stdio.h>

int main()
{

  FILE *fh;
  int counter=0;
  char c;
  fh = fopen("filename.txt","r");
  c = 'a';
  printf("--> ");
  while (c!=EOF){
    c = fgetc(fh);
    printf("%c",c);
    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
      if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
      counter++;
    }
  }
  printf("\n Total Vowels: %d",counter);
  return 0;
}
