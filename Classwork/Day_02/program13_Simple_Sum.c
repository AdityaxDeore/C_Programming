#include <stdio.h>
#include <stdlib.h>

int Addition(int iNo1, int iNo2) {
  int iAns = 0;
  iAns = iNo1 + iNo2;
  return iAns;
}

int main() {
  int ivalue1 = 0, ivalue2 = 0, iResult = 0;

  printf("Enter first number  : \n");
  if (scanf("%d", &ivalue1) != 1)
  {
    fprintf(stderr,"Input invalid : please enter a decimal value\n");
    return EXIT_FAILURE;
  }

  printf("Enter second number : \n");
  if (scanf("%d", &ivalue2) != 1)
  {
    fprintf(stderr,"Input invalid : please enter a decimal value\n");
    return EXIT_FAILURE;
  }

  iResult = Addition(ivalue1, ivalue2);

  printf("The result is : %d\n", iResult);

  return EXIT_SUCCESS;
}
