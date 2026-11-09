#include <stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    if (ch >= 'A' && ch <= 'Z')
    {
        for (iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c ", iCnt);
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for (iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c ", iCnt);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
