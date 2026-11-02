#include <stdio.h>
#include<stdlib.h>

int Addition(
                int iNo1,
                int iNo2
            )
{
    int iAns = 0;
    iAns = iNo1+iNo2;
    return iAns;
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0, iResult = 0;

    printf("Enter first number  : \n");
    scanf_s("%d",&ivalue1);
    printf("Enter second number : \n");
    scanf_s("%d",&ivalue2);

    iResult=Addition(ivalue1,ivalue2);

    printf("The result is : %d\n",iResult);

    return EXIT_SUCCESS;
}
