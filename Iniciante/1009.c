#include <stdio.h>

int main(){

    char nome[15];
    double sf, tv, tr;
    scanf("%s[^\n]", nome);
    scanf("%lf %lf", &sf, &tv);
    tr = 0.15 * tv + sf;
    printf("TOTAL = R$ %.2lf\n", tr);

    return 0;
}
