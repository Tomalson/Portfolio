#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
float r;
printf("Podaj promien kola: ");
int res=scanf("%f",&r);
while(res!=1||r<=0){
	printf("Incorrect input\n");
printf("Podaj promien kola: ");
while(getchar()!='\n');
res=scanf("%f",&r);
}
float p = M_PI*pow(r,2), o=2*M_PI*r;
printf("Obwod kola: %f\n Pole kola: %f\n",o,p);
return 0;
}