#include <stdio.h>

int main() {
    
    //Declaração das variáveis
    float salario, perc;

    //Solicita o valor do salário
    printf("Digite o valor do salário: \n");
    
    //Pega o valor digitado e guarda na variável salario
    scanf("%f", &salario);

    //Solicita a porcentagem
    printf("Digite a porcentagem de aumento (0 - 100):\n");
    
    //Pega o valor digitado e guarda na variável perc
    scanf("%f", &perc);
    
    //Faz o cálculo
    salario = (salario * (1 + (perc/100)));

    //Exibe o resultado final
    printf("Salario final: R$ %.2f.\n", salario);

}