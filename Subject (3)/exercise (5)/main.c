#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l = 0;
    for (int i = 0; i <= 500; i++)
    {
        printf("%d ", l);
        l += 2;
    }
    return 0;
}