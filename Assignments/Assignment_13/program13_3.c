#include <stdio.h>

int CountRange(int iNo, int iStart, int iEnd)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;

        if ((iDigit > iStart) && (iDigit < iEnd))
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    printf("Enter starting point");
    scanf("%d", &iValue1);

    printf("Enter ending point");
    scanf("%d", &iValue2);

    iRet = CountRange(iValue, iValue1, iValue2);

    printf("Count is %d", iRet);

    return 0;
}
