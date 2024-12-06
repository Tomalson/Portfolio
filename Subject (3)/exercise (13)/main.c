#include <stdio.h>
#include <stdlib.h>

int main(){
    float l,lr=0,temp;
    printf("podaj kolejna liczbe: ");
    int res = scanf("%f",&l);
    if(res!=1){
        printf ("incorrect input");
        return 1;
    }
    while(l!=0){
        temp=l;
        printf("podaj kolejna liczbe: ");
         res = scanf("%f",&l);
        if(res!=1){
        printf ("incorrect input");
        return 1;
        }
        lr=l-temp;
        printf("%f\n",lr);
    }
    
    return 0;
}