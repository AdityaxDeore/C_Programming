#include <stdio.h>

int main()
{
    int ivalue1, ivalue2, iresult;

    printf("enter the first value");
    scanf("%d", &ivalue1);

    printf("enter the second value");
    scanf("%d", &ivalue2);
    iresult = ivalue1+ivalue2;
    printf("The result is %d",iresult);
    return 0;
}