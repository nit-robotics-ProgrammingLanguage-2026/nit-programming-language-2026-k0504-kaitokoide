#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);

    if ((0 <= input && input < 10) ||
        (12 <= input && input < 15))
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }

    return 0;
}