#include <stdio.h>

int main() {
    //Declaração das variáveis que serão utilizadas
    int base, altura, area;


    printf("-----Triangulo-----\n");
    
    //Digite a base do triângulo
    printf("Base:\n");
    scanf("%d", &base);

    //Digite a altura do triângulo
    printf("Altura:\n");
    scanf("%d", &altura);

    //Cálculo da área
    area = (base * altura)/2;

    //Resposta
    printf("Resultado (Area do Triangulo) = %d\n", area);


}