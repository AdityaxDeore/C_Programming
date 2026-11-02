#include <stdio.h>

float Average(int iNo1, int iNo2, int iNo3)
{
    return (float)(iNo1 + iNo2 + iNo3) / 3;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    float fValue3 = 0.0f;
    float fRet = 0.0f;

    printf("Enter first number");
    scanf("%f", &fValue1);

    printf("Enter second number");
    scanf("%f", &fValue2);

    printf("Enter third number");
    scanf("%f", &fValue3);

    fRet = Average(fValue1, fValue2, fValue3);

    printf("Average is %f", fRet);

    return 0;
}
