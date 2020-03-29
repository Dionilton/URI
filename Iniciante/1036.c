#include <stdio.h>
#include <math.h>

int main(){

    double a,b,c,d,r1,r2;
    scanf("%lf %lf %lf", &a,&b,&c);
    d = pow(b,2.0) - 4*a*c;
    r1 = (-b + sqrt(d))/(2*a);
    r2 = (-b - sqrt(d))/(2*a);
    if(a==0 || d<0){
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %.5lf\nR2 = %.5lf\n", r1,r2);
    }

    return 0;
}
