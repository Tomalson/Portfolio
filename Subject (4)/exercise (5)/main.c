#include <stdio.h>
#include <stdlib.h>

int main(){
    float tab[10];
    for(int i=0;i<10;i+=2){
        printf("wprowadz liczby zmiennoprzecinkowe o indeksach %d i %d oddzielone spacja: ",i,i+1);
    int res =scanf("%f %f",&tab[i],&tab[i+1]);
    if(res!=2){
        printf("Input data type error");
        return 1;
    }
    }
    for(int i=0;i<10;i+=2){
    printf("indeks %d: %f\nindeks %d: %f\n",i,tab[i],i+1,tab[i+1]);
    }
    return 0;
}