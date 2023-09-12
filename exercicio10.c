#include<stdio.h>
#include<math.h>
main(){

    float a = 10, b = 0, c = 0, delta, x1, x2;

    if(a == 0){
        printf("Não e equação de segundo grau");
    }else{
        //realizar os calculos da equacao
        delta = pow(b,2) - 4 * a * c;

        if(delta < 0){
            printf("Nao existe raiz real");
        }else if(delta == 0){
            x1 = (-b + sqrt(delta))/(2 * a);
            printf("Raiz unica: %f", x1);
        }else{
            x1 = (-b + sqrt(delta))/(2 * a);
            x2 = (-b - sqrt(delta))/(2 * a);
            printf("Duas raizes reais: x1: %f, x2: %f", x1, x2);
        }
    }



}