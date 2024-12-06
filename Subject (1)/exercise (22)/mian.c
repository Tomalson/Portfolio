#include <stdio.h>
#include <stdlib.h>	
#include <math.h>

int main(){
	float l1;
	int precyzja;
printf("podaj liczbe zmiennoprzecinkowa: ");
scanf("%f",&l1);
printf("Podaj precyzje: ");
scanf("%d",&precyzja);
printf("%.*f\n",precyzja,l1);
return 0;
}