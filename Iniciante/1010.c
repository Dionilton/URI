#include <stdio.h>

int main(){

    int c1, n1, c2, n2;
    double v1, v2, vp;
    scanf("%d %d %lf %d %d %lf", &c1, &n1, &v1, &c2, &n2, &v2);
    vp = n1*v1 + n2 * v2;
    printf("VALOR A PAGAR: R$ %.2lf\n", vp);

    return 0;
}
