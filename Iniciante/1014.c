#include <stdio.h>

int main(){

    int x;
    double y,cm;
    scanf("%d %lf", &x,&y);
    cm = x/y;
    printf("%.3lf km/l\n", cm);

    return 0;
}
