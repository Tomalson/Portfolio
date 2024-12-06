#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 2;
    float l, min, max, avrg = 0;
    printf("Wprowadz   1 liczbe: ");
    int res = scanf("%f", &l);
    if (res != 1)
    {
        printf("incorrect input\n");
        return 1;
    }
    min = max = avrg = l;
    while (i <= 100)
    {
        printf("Wprowadz %3d liczbe: ", i);
        res = scanf("%f", &l);
        if (res != 1)
        {
            printf("incorrect input\n");
            return 1;
        }
        if (l > max)
        {
            max = l;
        }
        if (l < min)
        {
            min = l;
        }
        avrg += l;
        i++;
    }
    printf("min: %f\nmax: %f\navrg: %.2f\n", min, max, avrg / 100);
    return 0;
}
