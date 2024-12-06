#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int tab[10],min,max;
    float avrg=0;
    for(int i=0;i<10;i+=2){
        printf("wprowadz liczby calkowite o indeksach %d i %d oddzielone spacja: ",i,i+1);
    int res =scanf("%d %d",&tab[i],&tab[i+1]);
    if(res!=2){
        printf("Input data type error");
        return 1;
    }
    }
    for(int i=0;i<10;i++){
        avrg+=tab[i];
    }
    max=tab[0];
    for(int i=1;i<10;i++){
    if(max<tab[i]){
        max=tab[i];
    }
    }
    min=tab[0];
    for(int i=1;i<10;i++){
    if(min>tab[i]){
        min=tab[i];
    }
    }
    printf("wartość średnia: %.4f\n",avrg/10);
    printf("max: %d\n",max);
    printf("min: %d\n",min);
    return 0;
}
