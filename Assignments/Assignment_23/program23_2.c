#include <stdio.h>

void StruprX(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^'\n']s", arr);

    StruprX(arr);

    printf("%s", arr);

    return 0;
}
