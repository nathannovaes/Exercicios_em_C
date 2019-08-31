/*
    Programa que receba três notas, calcule e mostre a média aritmética.
*/

#include <stdio.h>

int main(){
    //Declara as variáveis como números quebrados, pois se trata de um cálculo de média.
    float nota1, nota2, nota3, media;
    //Pede a primeira nota para o usuário
    printf("Digite o valor da nota da prova 1: \n");
    //Guarda o valor em nota1
    scanf("%f",&nota1);
    //Exibe o valor com limite de duas casas depois da vírgula
    printf("Valor digitado: %.2f\n", nota1);


    //Pede a primeira nota para o usuário
    printf("Digite o valor da nota da prova 2: \n");
    //Guarda o valor em nota2
    scanf("%f",&nota2);
    //Exibe o valor com limite de duas casas depois da vírgula
    printf("Valor digitado: %.2f\n", nota2);

    //Pede a terceira nota para o usuário
    printf("Digite o valor da nota da prova 3: \n");
    //Guarda o valor em nota3
    scanf("%f",&nota3);
    //Exibe o valor com limite de duas casas depois da vírgula
    printf("Valor digitado: %.2f\n", nota3);

    //Faz a média entre as notas e guarda na variável media
    media = (nota1 + nota2 + nota3)/3;

    //Exibe o resultado final
    printf("Média final é igual a: %.2f\n", media);

}
