#include <stdio.h>

int main(){

    double a,b,c,x;
    scanf("%lf%lf%lf", &a,&b,&c);
    if(a+b>c && a+c>b && c+b>a ){
        x=a+b+c;
        printf("Perimetro = %.1lf\n", x);
    }
    else{
        x = ((a+b)/2)*c;
        printf("Area = %.1lf\n", x);
    }

    return 0;
}
