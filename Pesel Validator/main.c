#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11;
    printf("Podaj numer PESEL: ");
    int res = scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&p1,&p2,&p3,&p4,&p5,&p6,&p7,&p8,&p9,&p10,&p11);
    if(res != 11){
        printf("Wprowadü poprawne dane");
        return 1;
    }
    
    if(p1 < 0 || p1 > 9 || p2 < 0 || p2 > 9 || p3 < 0 || p3 > 9 || p4 < 0 || p4 > 9 || p5 < 0 || p5 > 9 || p6 < 0 || p6 > 9 || p7 < 0 || p7 > 9 || p8 < 0 || p8 > 9 || p9 < 0 || p9 > 9 || p10 < 0 || p10 > 9 || p11 < 0 || p11 > 9){
        printf("Wprowadü poprawne dane");
        return 1;
    }
    
    int pesel[11] = {p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11};
    int wagi[10] = {1,3,7,9,1,3,7,9,1,3};
    int suma = 0;
    
    for(int i = 0; i < 10; i++){
        suma += pesel[i] * wagi[i];
    }
    
    int kontrolna = (10 - (suma % 10)) % 10;
    
    if(kontrolna == pesel[10]){
        printf("PESEL: ");
        for(int i = 0; i < 11; i++){
            printf("%d", pesel[i]);
        }
        printf(" jest poprawny\n");
    } 
    else {
        printf("PESEL: ");
        for(int i = 0; i < 11; i++){
            printf("%d", pesel[i]);
        }
        printf(" jest niepoprawny\n");
        return 1;
    }
    
    if(p10 % 2 == 0){
        printf("Kobieta\n");
    } else {
        printf("MÍøczyzna\n");
    }
    
    if(p1 == 0 || p1 == 1){
        if(p3 == 3){
            int temp = p3 * 10 + p4;
            printf("Data urodzenia: %d%d.%2d.20%d%d\n", p5, p6, temp-20, p1, p2);
        }
        if(p3==2){
            int temp = p3 * 10 + p4;
            printf("Data urodzenia: %d%d.%02d.20%d%d\n", p5, p6, temp-20, p1, p2);
        }
    }
    else{
        if(p3==1){
            int temp = p3 * 10 + p4;
            printf("Data urodzenia: %d%d.%2d.19%d%d\n", p5, p6, temp, p1, p2);
        }
        if(p3==0){
            int temp = p3 * 10 + p4;
            printf("Data urodzenia: %d%d.%02d.19%d%d\n", p5, p6, temp, p1, p2);
        }
    }

    return 0;
}
