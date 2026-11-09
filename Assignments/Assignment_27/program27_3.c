#include <stdio.h>

int Difference(char *str)
{
    int iCapital = 0;
    int iSmall = 0;

    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }
        else if (*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        str++;
    }

    return iSmall - iCapital;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}
