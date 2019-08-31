#include <stdio.h>

int main() {
    
    //Declaração das variáveis
    float salario, imposto, gratificacao;

    //Solicita o valor do salário
    printf("Digite o valor do salário: \n");
    
    //Pega o valor digitado e guarda na variável salario
    scanf("%f", &salario);

    //Cálculo da gratificação de 5% sobre o salário
    gratificacao = salario * 0.05;

    //Cálculo do imposto em 7% sobre o salário
    imposto = salario * 0.07;
    

    //Exibe o resultado final
    printf("Salario:        + R$ %.2f\n", salario);

    //Faz o cálculo liquido
    salario = salario + gratificacao - imposto;
    
    //Gratificação
    printf("Gratificacao:   + R$  %.2f\n", gratificacao);

    //Imposto
    printf("Imposto:        - R$  %.2f\n", imposto);

    //Resultado
    printf("Salario liquido:  R$ %.2f\n", salario);

}