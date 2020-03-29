#include <stdio.h>

int main(){

    double x;
    int vp=0;
    for(int i=0;i<6;i++){
        scanf("%lf", &x);
        if(x>0){
            vp++;
        }
    }
    printf("%d valores positivos\n", vp);

    return 0;
}
