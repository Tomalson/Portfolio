#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float a,b,c,d,e, wynik;

    printf("podaj 5 liczb: ");
    int res = scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
        if (res!=5)
        {
            printf("nie wczytano 10 wartosci liczbowych");
            return 1;
        }
        wynik=(a+b+c+d+e)/5.0;
        printf("Œrednia arytmetyczna = %.4f",wynik);

    return 0;
}
