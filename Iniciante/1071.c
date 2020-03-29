#include <stdio.h>

int main(){

    int x,y,s = 0, i=0;
    scanf("%d%d", &x, &y);
    if(x>y && y%2 != 0){
         for(i = y+2; i<x; i+=2){
             s += i;
         }
    }
    else if(x>y && y%2 == 0){
        y += 1;
        for(i=y; i<x; i+=2){
            s += i;
        }
      }

    else if(y>x && x%2 != 0){
         for(i = x+2; i<y; i+=2){
             s += i;
         }
      }
    else if(y>x && x%2 == 0){
        x += 1;
        for(i=x; i<y; i+=2){
            s += i;
        }
      }
    printf("%d\n", s);

     return 0;
}
