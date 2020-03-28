#include <stdio.h>

int main(){

    int t,vm;
    double l;
    scanf("%d %d", &t, &vm);
    l = (double)(t*vm)/12;
    printf("%.3lf\n", l);

    return 0;
}
