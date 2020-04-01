#include <stdio.h>

int main(){

    double s,i;
    scanf("%lf", &s);
    if(s<=2000){
        printf("Isento\n");
    }
    else if(s<=3000){
        i = (s-2000)*0.08;
        printf("R$ %.2lf\n", i);
    }
    else if(s<=4500){
        i = 80 + (s-3000)*0.18;
        printf("R$ %.2lf\n", i);
    }
    else{
        i = 350 + (s-4500)*0.28;
        printf("R$ %.2lf\n", i);
    }

    return 0;
}
