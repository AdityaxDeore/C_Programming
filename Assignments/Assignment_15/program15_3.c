#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter first number");
    scanf("%d", &iValue1);

    printf("Enter second number");
    scanf("%d", &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if (bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}
