#include <stdio.h>

int main(){

    int i,f,t;
    scanf("%d%d", &i,&f);
    if(i==f){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(i>f){
        t = 24-i+f;
        printf("O JOGO DUROU %d HORA(S)\n", t);
    }
    else if(i<f){
        t = f-i;
        printf("O JOGO DUROU %d HORA(S)\n", t);
    }

    return 0;
}
