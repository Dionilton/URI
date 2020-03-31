#include <stdio.h>

int main(){

    int x[3], y[3],menor=99999999,t;
    for(int i=0;i<3;i++){
        scanf("%d", &x[i]);
        y[i]=x[i];
    }
    for(int i=0;i<=1;i++){
        if(x[i+1]<x[i]){
            t=x[i];
            x[i]=x[i+1];
            x[i+1]=t;
        }
    }
    if(x[1]<x[0]){
            t=x[0];
            x[0]=x[1];
            x[1]=t;
        }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", x[0],x[1],x[2],y[0],y[1],y[2]);

    return 0;
}
