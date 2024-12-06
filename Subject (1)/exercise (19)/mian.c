#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
float x,y;
printf("podaj wartoœæ x: ");
int res = scanf("%f",&x);
    if(res!=1)
    {
        printf("podaj liczbê zmiennoprzecinkow¹");
    }
        y=2*pow(x, 3)-4*pow(x,2)+3*x-7;
        printf("wartosc funkcji y wynosi %f",y);
    return 0;
}
