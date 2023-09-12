#include <stdio.h>


main() {

    float tempo;
    float salarioAtual, salarioReajustado = 0, bonus, salarioFinal;

    printf("Digite o salario");
    scanf("%f", &salarioAtual);
    
    printf("DIgite o tempo de servico");
    scanf("%f", &tempo);

    //calcular o reajuste pelo valor do salario

    if(salarioAtual < 500){
        salarioReajustado = salarioAtual * 1.25;
    }else if(salarioAtual > 500 && salarioAtual < 1000){
        salarioReajustado = salarioAtual * 1.2;
    }else if(salarioAtual > 1000 && salarioAtual < 1500){
        salarioReajustado = salarioAtual * 1.15;
    }else if(salarioAtual > 1500 && salarioAtual < 2000){
        salarioReajustado = salarioAtual * 1.1;
    }else{
        salarioReajustado = salarioAtual;
    }

    if(tempo < 1){
        bonus = 0;
    }else if(tempo >= 1 && tempo < 3){
        bonus = 100;
    }else if(tempo >= 3 && tempo < 6){
        bonus = 200;
    }else if(tempo >= 6 && tempo < 10){
        bonus = 300;
    }else{
        bonus = 500;
    }

    salarioFinal = salarioReajustado + bonus;

   // printf("%f", salarioFinal);

    if(salarioFinal == salarioAtual){
        printf("Não teve aumento");
    }else{
        printf(" teve aumento");
        printf("Salario final: %f", salarioFinal);
    }
}
