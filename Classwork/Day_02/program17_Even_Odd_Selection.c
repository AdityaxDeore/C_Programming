#include <stdio.h>
#include <stdlib.h>


int main() {
  int iValue = 0;
  int iRet = 0;

  printf("Enter a number \n");
  scanf("%d", &iValue);

  if ((iValue % 2) == 0) {
    printf("%d is even", iValue);
  } else {
    printf("%d is odd", iValue);
  }

  return EXIT_SUCCESS;
}