#include <stdio.h>

int main(){

    int n,n100,n50,n20,n10,n5,n2,n1;
    scanf("%d", &n);
    n100 = n/100;
    n50 = (n%100)/50;
    n20 = ((n%100)%50)/20;
    n10 = (((n%100)%50)%20)/10;
    n5 = ((((n%100)%50)%20)%10)/5;
    n2 = (((((n%100)%50)%20)%10)%5)/2;
    n1 = (((((n%100)%50)%20)%10)%5)%2;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n,n100,n50,n20,n10,n5,n2,n1);

    return 0;
}
