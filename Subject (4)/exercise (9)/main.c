#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int tab[100],i=0,e,s=0,min,max;
    float avrg=0;
    printf("Podaj dane: \n");
    while(i<100){
        int res=scanf("%d",&e);
        if(res!=1){
            printf("incorrect input");
            return 1;
        }
        if(e==-1){
            break;
        }
        s+=e;
        tab[i++]=e;
        avrg+=e;
    }
    if(i==0){
        printf("Liczba danych = 0");
        return 1;
    }
     max=tab[0];
    for(int j=1;j<i;j++){
    if(max<tab[j]){
        max=tab[j];
    }
    }
    min=tab[0];
    for(int j=1;j<i;j++){
    if(min>tab[j]){
        min=tab[j];
    }
    }
    printf("%d\n",i);
    printf("%d\n",min);
    printf("%d\n",max);
    printf("%f\n",avrg/i);
    printf("%d\n",s);
    return 0;
}
