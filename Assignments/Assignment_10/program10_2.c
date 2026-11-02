#include <stdio.h>

int Diff(int iNo1, int iNo2)
{
    return iNo1 - iNo2;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter first number");
    scanf("%d", &iValue1);

    printf("Enter second number");
    scanf("%d", &iValue2);

    iRet = Diff(iValue1, iValue2);

    printf("Difference is %d", iRet);

    return 0;
}
