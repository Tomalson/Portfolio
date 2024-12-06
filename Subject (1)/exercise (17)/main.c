#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int a,b,c,d,e,f,g,h,i,j;
    float wynik;
    printf("podaj 10 liczb: ");
    int res = scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
        if (res!=10)
        {
            printf("nie wczytano 10 wartosci liczbowych");
            return 1;
        }
        wynik=(a+b+c+d+e+f+g+h+i+j)/10.0;
        printf("Œrednia arytmetyczna = %.4f",wynik);

    return 0;
}
