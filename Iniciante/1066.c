#include <stdio.h>

int main(){

    int par=0,imp=0,pos=0,neg=0,x;
    for(int i=0;i<5;i++){
        scanf("%d", &x);
        if(x>0){
            pos++;
        }
        if(x<0){
            neg++;
        }
        if(x%2==0){
            par++;
        }
        if(x%2!=0){
            imp++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par,imp,pos,neg);

    return 0;
}
