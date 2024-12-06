#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int tab[1000],e,i=0,sa=0,sb=0;
    float avrg = 0;
    printf("Podaj dane: ");
    while(i<1000){
        int res = scanf("%d",&e);
         if(res!=1){
            printf("incorrect input");
            return 1;
        }
        if(e==0){
            break;
        }
        tab[i++]=e;
        avrg+=e;
    }
    if(i==0){
        printf("brak danych");
        return 0;
    }
    avrg=avrg/i;
    for(int j=0;j<i;j++){
        if(tab[j]>avrg){
            sa+=tab[j];
        }
        if(tab[j]<avrg){
            sb+=tab[j];
        }
    }
    printf("%.2f\n%d\n%d",avrg,sa,sb);
    return 0;
}
