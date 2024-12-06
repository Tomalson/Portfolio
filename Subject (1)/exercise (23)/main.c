#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int l1, l2, l3;
	printf("podaj liczby:");
	scanf("%3d%3d%3d",&l1,&l2,&l3);

	printf("%03d\n%03d\n%03d\n",l1,l2,l3);
	return 0;
}