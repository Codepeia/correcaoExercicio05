#include<stdio.h>
main(){

/*
    Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou superior a 7.0 pontos.
*/

    float nota1 = 7, nota2 = 8, nota3 = 7, mediaPonderada;

    mediaPonderada = (nota1 + nota2 + (nota3 * 2))/4;

    printf("Media do aluno: %.2f",mediaPonderada);

    if(mediaPonderada >= 7){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }





}