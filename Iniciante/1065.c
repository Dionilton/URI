#include <stdio.h>

int main(){

    int x;
    int vp=0;
    for(int i=0;i<5;i++){
        scanf("%d", &x);
        if(x%2==0){
            vp++;
        }
    }
    printf("%d valores pares\n", vp);

    return 0;
}
