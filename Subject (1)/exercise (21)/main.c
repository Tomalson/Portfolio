#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
float temp, F, K;
printf("podaj temperature w stopniach celsjusza: ");
int res = scanf("%f",&temp);
if(res!=1)
{
printf("bledna wartosc");
return 1;
}
F=(temp*1.8)+32;
K=temp+273.15;
printf("%.2f\n",K);
    printf("%.2f\n",F);
    return 0;
}
