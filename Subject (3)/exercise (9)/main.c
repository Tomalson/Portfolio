#include <stdio.h>
#include <stdlib.h>
int main(){
    int t1,t2;
        for(int a = -10;a<=10;a++){

            for(int b = -10;b<=10;b++){
                t1=(a+b)*(a-b);
                t2=(a*a)+(b*b);
                if(t1==t2){
                    printf("%3d  %3d\n",a,b);        
                }
            }  
        }
        return 0;
}