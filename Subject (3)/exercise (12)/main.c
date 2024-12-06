#include <stdio.h>
#include <stdlib.h>

int main(){
int l;
unsigned long long w=1;
printf("podaj liczbe: ");
int res = scanf("%d",&l);
if(res!=1||l>20||l<0){
	printf("Incorrect input");
	return 1;
}
if(l==0){
	printf("1");
	return 0;
}
for(int i=1;i<=l;i++){
	w=w*i;
}
printf("%llu ",w);
return 0;
}