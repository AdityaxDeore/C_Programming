#include <stdio.h>
#include <stdlib.h>

void CheckEven(int No)
{
   

  if ( (No % 2) == 0) {
    printf("%d is even", No);
  } else {
    printf("%d is odd", No);
  }  
}

int main() {
  int iValue = 0;



  printf("Enter a number \n");
  scanf("%d", &iValue);

  CheckEven(iValue);

  return EXIT_SUCCESS;
}