#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int kwh;
double kb;
printf("podaj ilosć kWh: ");
int res = scanf("%d",&kwh);
if (!res){
    printf("incorrect input");
    return 1;
}

if(kwh<=0){
    printf("incorrect input");
    return 1;
}

if(kwh>0&&kwh<=50){
kb=kwh*0.50;
printf("Koszt brutto: %f", kb*1.22);
}
else if(kwh>50&&kwh<=150){
kb=(50*0.50)+((kwh-50)*0.75);
printf("Koszt brutto: %f", kb*1.22);
}
else if(kwh>150&&kwh<=250){
kb=(50*0.50)+(100*0.75)+((kwh-150)*1.20);
printf("Koszt brutto: %f", kb*1.22);
}
else if(kwh>250){
kb=(50*0.50)+(100*0.75)+(100*1.20)+((kwh-250)*1.50);
printf("Koszt brutto: %f", kb*1.22);
}

    return 0;
}