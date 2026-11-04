#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    int jCnt = 0;

    for (iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for (jCnt = 1; jCnt <= iCol; jCnt++)
        {
            printf("%c ", 'A' + jCnt - 1);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows");
    scanf("%d", &iValue1);

    printf("Enter number of columns");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
