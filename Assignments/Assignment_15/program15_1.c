#include <stdio.h>
#include <string.h>

int main()
{
    char Name[50];

    printf("Enter name");
    fgets(Name, 50, stdin);

    Name[strcspn(Name, "\n")] = '\0';

    printf("%s", Name);

    return 0;
}
