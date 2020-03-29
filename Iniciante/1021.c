#include <stdio.h>

int main(){

    int n,m,n100,n50,n20,n10,n5,n2,m1,m50,m25,m10,m5,m01;
    scanf("%d.%d", &n,&m);
    n100 = n/100;
    n50 = (n%100)/50;
    n20 = ((n%100)%50)/20;
    n10 = (((n%100)%50)%20)/10;
    n5 = ((((n%100)%50)%20)%10)/5;
    n2 = (((((n%100)%50)%20)%10)%5)/2;
    m1 = (((((n%100)%50)%20)%10)%5)%2;

    m50 = m/50;
    m25 = (m%50)/25;
    m10 = ((m%50)%25)/10;
    m5 = (((m%50)%25)%10)/5;
    m01 = (((m%50)%25)%10)%5;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", n100,n50,n20,n10,n5,n2,m1,m50,m25,m10,m5,m01);

    return 0;
}
