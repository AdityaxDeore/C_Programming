#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    int jCnt = 0;

    for (iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for (jCnt = 1; jCnt <= iCol; jCnt++)
        {
            if (iCnt % 2 == 1)
            {
                printf("%d ", 2 * jCnt);
            }
            else
            {
                printf("%d ", 2 * jCnt - 1);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
