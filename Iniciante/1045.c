#include <stdio.h>

int main(){

    double a,b,c,x[3],menor=99999999,t;

    for(int i=0;i<3;i++){
        scanf("%lf", &x[i]);
    }

    for(int i=0;i<3;i++){
        if(i!=2){
            if(x[i+1]>x[i]){
                t=x[i];
                x[i]=x[i+1];
                x[i+1]=t;
            }
        }else{
            if(x[1]>x[0]){
                t=x[0];
                x[0]=x[1];
                x[1]=t;
            }
        }
    }
    a=x[0], b=x[1],c=x[2];
    if(a>=b+c){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if(a*a==b*b+c*c){
            printf("TRIANGULO RETANGULO\n");
        }
        if(a*a>b*b+c*c){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(a*a<b*b+c*c){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(a==b && b==c){
            printf("TRIANGULO EQUILATERO\n");
        }
        if(a==b && a!=c || a==c && a!=b || b==c && b!=a){
            printf("TRIANGULO ISOSCELES\n");
        }
        
        
    }

    return 0;
}
