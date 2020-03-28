#include <stdio.h>

int main(){

    int n,h;
    double sh, s;
    scanf("%d %d %lf", &n, &h, &sh);
    s = h*sh;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", n, s);

    return 0;
}
