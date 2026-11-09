#include <stdio.h>

void StrlwrX(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^'\n']s", arr);

    StrlwrX(arr);

    printf("%s", arr);

    return 0;
}
