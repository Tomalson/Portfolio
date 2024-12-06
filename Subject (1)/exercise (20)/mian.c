#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
float a,b,c;
double alfa,beta;
printf("wprowadz pierwsza przyprostokatna: ");
int res = scanf("%f",&a);
printf("wprowadz druga przyprostokatna: ");
int res1 = scanf("%f",&b);
if(res!=1||res1!=1)
{
printf("nie wprowadzono poprawnych wartoœci");
return 1;
}
c=sqrt(pow(a, 2)+pow(b, 2));
printf("przeciwprostokatna to: %.2f\n",c);
alfa=asin(a/c);
beta=asin(b/c);
alfa = alfa*(180/M_PI);
beta = beta*(180/M_PI);
printf("%.2f\n",alfa);
printf("%.2f", beta);
    return 0;
}
