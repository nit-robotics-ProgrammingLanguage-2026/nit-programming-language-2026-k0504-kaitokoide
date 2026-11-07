#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
/* 0以上10未満、または12以上15未満ならOKと表示する */
    if ((0 <= input && input < 10) ||
        (12 <= input && input < 15))
    {
        printf("OK");
    }
    else
    {
        /* どちらの範囲にも入らなければNGと表示する */
        printf("NG");
    }

    return 0;
}