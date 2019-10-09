#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(){
  char mot1[20];
  char mot2[20];
  printf("mot1 = ");
  gets(mot1); 
  printf("mot2 = ");
  gets(mot2);

  int test;
  test = strcmp(mot1,mot2);

  if(test>0)
    printf("mot1 > mot2\n");
  else if(test<0)
    printf("mot2 > mot1\n");
  else
    printf("mot1 = mot2\n");
  return 0;
}
