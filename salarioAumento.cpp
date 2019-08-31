#include <stdio.h>

int main(){
    float salario;
    printf("Digite o salario: \n");
    scanf("%f", &salario);

    salario = salario * 1.25;
    printf("Salario + aumento de 25 por cento = %.2f\n", salario);

}