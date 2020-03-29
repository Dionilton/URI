#include <stdio.h>

int main(){

    double x,s=0;
    int vp=0;
    for(int i=0;i<6;i++){
        scanf("%lf", &x);
        if(x>0){
            vp++;
            s +=x;
        }
    }
    printf("%d valores positivos\n%.1lf\n", vp, s/vp);

    return 0;
}
