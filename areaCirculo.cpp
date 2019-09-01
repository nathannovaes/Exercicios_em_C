#include <stdio.h>

int main() {
    //Declaração das variáveis que serão utilizadas
    float raio, area;


    printf("-----Circulo-----\n");
    
    //Digite o raio do círuclo
    printf("Raio:\n");
    scanf("%f", &raio);

    //Cálculo da área
    area = 3.1415 * (raio * raio);

    //Resposta
    printf("Resultado (Area do Circulo) = %.2f\n", area);


}