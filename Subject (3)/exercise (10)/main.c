#include <stdio.h>
#include <stdlib.h>
int main(){
	float l,lw=0;
for(int i=1;i<=10;i++){
	printf("podaj %2d liczbe: ",i);
	int res=scanf("%f",&l);
	if(!res){
		printf("Incorrect input");
		return 1;
	}
	lw=lw+l;
} 
printf("%f",lw);
return 0;
}