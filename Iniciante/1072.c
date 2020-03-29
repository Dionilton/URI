#include <stdio.h>

int main(){

    int x,y,in=0,out=0;
    scanf("%d", &x);
    for(int i=0;i<x;i++){
        scanf("%d", &y);
        if(y>=10 && y<=20){
            in++;
        }else{
            out++;
        }
    }
    printf("%d in\n%d out\n", in, out);

    return 0;
}
