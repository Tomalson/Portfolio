#include <stdio.h>
#include <stdlib.h>


int main(){
    unsigned long long liczba;
    printf("podaj liczbe unsigned long long: ");
    int res = scanf("%llu", &liczba);
    if(res!=1){
        printf("Incorrect input");
        return 1;
    }
    int pierwsza,ostatnia;
    ostatnia = liczba % 10;
    while(liczba>=10){
        liczba=liczba/10;
    }
    pierwsza = liczba;
    printf("pierwsza %d\n",pierwsza);
    printf("ostatnia %d\n",ostatnia);

    return 0;
}