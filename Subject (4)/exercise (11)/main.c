#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int tab[100000],e,i=0,l0=0,l1=0,l2=0,l3=0,l4=0,l5=0,l6=0,l7=0,l8=0,l9=0,l10=0;
    printf("Podaj dane: ");
    while(i<100000){
        int res = scanf("%d",&e);
         if(res!=1){
            printf("incorrect input");
            return 1;
        }
        if(e==-1){
            break;
        }
        if(e>=0&&e<=10){
        tab[i++]=e;
        }
    }
    for(int j=0;j<i;j++){
        if(tab[j]==0){
         l0++;
        }
        else if(tab[j]==1){
         l1++;
        }
        else if(tab[j]==2){
         l2++;
        }
        else if(tab[j]==3){
         l3++;
        }
        else if(tab[j]==4){
         l4++;
        }
        else if(tab[j]==5){
         l5++;
        }
        else if(tab[j]==6){
         l6++;
        }
        else if(tab[j]==7){
         l7++;
        }
        else if(tab[j]==8){
         l8++;
        }
        else if(tab[j]==9){
         l9++;
        }
        else if(tab[j]==10){
         l10++;
        }
    }
    printf("0 - %d\n1 - %d\n2 - %d\n3 - %d\n4 - %d\n5 - %d\n6 - %d\n7 - %d\n8 - %d\n9 - %d\n10 - %d\n",l0,l1,l2,l3,l4,l5,l6,l7,l8,l9,l10);
    return 0;
}
