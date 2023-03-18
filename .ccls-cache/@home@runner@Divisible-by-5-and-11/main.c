#include <stdio.h>
#include <stdlib.h>

//This is a program that checks whether a number is divisible by 5 and 11

int main(void) 
{
  int num;
  printf ("Please enter a number:\t");
  scanf ("%d", &num);
  system("clear");

  if ((num % 5 == 0) && (num % 11 == 0))
    printf("The number you entered is divisible by 5 and 11\n");

  else
    printf("The number you entered is not divisble by 5 and 11\n");

printf("\nEnd of Program\n\n");
  sleep(5);
  system("clear");
  printf("Welcome User,\n");
  
  return 0;
}