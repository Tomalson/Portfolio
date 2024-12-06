#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, n3, k;
	printf("Podaj numer telefonu: ");
	scanf("%3d-%2d-%2d",&n1,&n2,&n3);
	printf("Podaj numer kierunkowy: ");
	scanf("%2d",&k);
	printf("(%02d) %03d-%02d-%02d",k,n1,n2,n3);
return 0;
}