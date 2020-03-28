#include <stdio.h>
#define pi 3.14159

int main(){

    double v, r;
    scanf("%lf", &r);
    v = (4.0/3.0) * pi * r*r*r;
    printf("VOLUME = %.3lf\n", v);

    return 0;
}
