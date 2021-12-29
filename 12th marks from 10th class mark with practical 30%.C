#include<stdio.h>
#include<conio.h>
#include<math.h>

void
main ()
{

  /*declaration of all the variable we gona use */

  int mathmark, sciencemark, milmark, englishmark, practicalmarkp,
    practicalmarkit, practicalmarkc;
  float totalmark, physicsmark, chemistrymark, itmark;
  int mps;
  char name;

  printf ("*********__CALULATE YOUR XII PERCENTAGE_**********\n");

  /*all the required marks from user */
  
  
 /* printf("HEY!! ENTER YOUR NAME :) :");
  scanf("%c",&name);
  printf("HELLO  %c \n",name);*/
 
  printf ("Enter Your Mathematics mark: ");
  scanf ("%d", &mathmark);
  printf ("Enter Your MIL mark: ");
  scanf ("%d", &milmark);
  printf ("Enter Your English mark: ");
  scanf ("%d", &englishmark);
  printf ("Enter Your Science mark: ");
  scanf ("%d", &sciencemark);
  printf ("######### PRACTICAL MARKS ##########\n");
  printf ("Enter Practical mark of Physics: ");
  scanf ("%d", &practicalmarkp);
  printf ("Enter Practical mark of Chemistry: ");
  scanf ("%d", &practicalmarkc);
  printf ("Enter Practical mark of Information Technology: ");
  scanf ("%d", &practicalmarkit);

  printf ("############ RESULT OF  #############\n");

  /*the mark which didnt need any type of calculation */

  printf ("Your Total percentage in Mathematics is: %d\n", mathmark);
  printf ("Your Total percentage in MIL(ODIA) is: %d\n", milmark);
  printf ("Your Total percentage in English is: %d\n", englishmark);
  printf ("Your Total percentage in Chemistry is: %d\n", sciencemark);

  /*the subjects which needs calculations */

  mps = mathmark + sciencemark;
  mps = mps / 2;
  mps = mps*0.7;
  
  physicsmark = mps+practicalmarkp;
  itmark = mps+practicalmarkit;
  
  printf("Your Total percentage in Physics: %f\n",physicsmark);
  printf("Your Total percentage in IT: %f\n",itmark);
  
  totalmark = mathmark+milmark+englishmark+sciencemark+physicsmark+itmark;
  totalmark = totalmark/6;
  
  printf("YOUR WHOLE PERCENTAGE IS: %f ",totalmark);
  
  totalmark=totalmark*6;
  printf("YOU SECURED %f MARKS OUT OF 600 !!",totalmark);
  
  

}

