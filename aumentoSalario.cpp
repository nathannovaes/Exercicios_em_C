#include <stdio.h>

int main(){
    
    //Variável salário
    float salario;
    
    //Pede o valor do salário para o usuário
    printf("Digite o salario: \n");
    
    //Pega o valor do salário e guarda dentro da variável salario
    scanf("%f", &salario);
    
    //Faz a conta de 25% de aumento e guarda dentro da variável salario
    salario = salario * 1.25;
    
    //Exibe na tela o resultado final
    printf("Salario + aumento de 25 por cento = %.2f\n", salario);

}
