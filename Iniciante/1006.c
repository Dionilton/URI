#include <stdio.h>

int main(){

    double a,b,c,m;
    scanf("%lf %lf %lf", &a, &b, &c);
    m = (a*2 + b*3 + c*5)/10;
    printf("MEDIA = %.1lf\n", m);

    return 0;
}
