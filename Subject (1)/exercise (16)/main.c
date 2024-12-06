#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float w1, w2, w3;
    printf("wprowadz pierwsza współrzędną: ");
    scanf("%f",&w1);
    printf("\rwprowadz druga współrzędną: ");
    scanf("%f",&w2);
    printf("\rwprowadz trzecia współrzędną: ");
    scanf("%f",&w3);

    float wynik = sqrt((w1*w1)+(w2*w2)+(w3*w3));
    printf("Długość wektora to: %.2f",wynik);




    return 0;
}
