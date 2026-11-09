#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    int jCnt = 0;

    for (iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for (jCnt = 1; jCnt <= iCol; jCnt++)
        {
            if (iCnt == 1 || iCnt == iRow)
            {
                printf("%d ", jCnt);
            }
            else if (jCnt == 1)
            {
                printf("%d ", 1);
            }
            else if (jCnt == iCol)
            {
                printf("%d ", iCol);
            }
            else if (iCnt == jCnt)
            {
                printf("%d ", iCnt);
            }
            else
            {
                printf("  ");
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
