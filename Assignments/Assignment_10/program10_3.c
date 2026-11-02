#include <stdio.h>

float Multiplication(int iNo1, int iNo2)
{
    return (float)(iNo1 * iNo2);
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    float fRet = 0.0f;

    printf("Enter first number");
    scanf("%f", &fValue1);

    printf("Enter second number");
    scanf("%f", &fValue2);

    fRet = Multiplication(fValue1, fValue2);

    printf("Multiplication is %f", fRet);

    return 0;
}
