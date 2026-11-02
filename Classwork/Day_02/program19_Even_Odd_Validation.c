#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckEven(int No)
{
   
  if ( (No % 2) == 0) 
  {
    return true;
  } 

  else 
  {
    return false;
  }  

}

int main() {
  int iValue = 0;
  bool bRet = false;


  printf("Enter a number \n");
  scanf("%d", &iValue);

  bRet = CheckEven(iValue);

  if (bRet == true)
  {
    printf("it is Even");
  }
  else 
  {
    printf("it is Odd");
  }

  return EXIT_SUCCESS;
}