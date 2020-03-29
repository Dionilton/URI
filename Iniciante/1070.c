#include <stdio.h>

int main(){

    int x;
    scanf("%d", &x);
    if(x%2==0){
        x = x+1;
        for(int i=0; i<6; i++, x+=2){
            printf("%d\n", x);
        }
    }else{
        for(int i=0; i<6; i++, x+=2){
            printf("%d\n", x);
        }
    }

    return 0;
}
