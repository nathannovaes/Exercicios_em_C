#include <stdio.h>

//Declaração das funções
int notaFinal (int id);


int main() {
    float nota, resultado;
    
    int i;
    //Loop que repete 3 vezes a função notaFinal
    for(i = 1; i < 4; i++){
        nota = notaFinal(i);
        resultado += nota;
    }

    //Exibe o valor final
    printf("Resultado = %.2f\n", resultado);
}


//Funções

int notaFinal(int id){
    float nota; 
    float peso;

    //NOTA
    //Pede a terceira nota para o usuário
    printf("Digite o valor da nota da prova %d: \n", id);
    //Guarda o valor em nota3
    scanf("%f",&nota);
    //Exibe o valor com limite de duas casas depois da vírgula
    printf("Valor digitado: %.2f\n", nota);

    //PESO
    //Pede a primeira nota para o usuário
    printf("Digite o peso da prova %d: \n", id);
    //Guarda o valor em nota1
    scanf("%f",&peso);
    //Exibe o valor com limite de duas casas depois da vírgula
    printf("Peso digitado: %.2f\n", peso);
    
    //Retorna o resultado da conta
    return nota * peso;
}