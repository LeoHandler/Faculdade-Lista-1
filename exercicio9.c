/* Uma empresa vende o mesmo produto para quatro diferentes estados.
Cada estado possui uma taxa diferente de imposto sobre o produto. Faça
um programa em que o usuário entre com o valor e o estado de destino do
produto e o programa retorne o preço final do produto acrescido do
imposto do estado em que ele será vendido. Se o estado digitado não for
válido, mostrará uma mensagem de erro. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    float valor, valor_final;
    char estado[3];

    printf("Insira o valor: ");
    scanf("%f", &valor);
    printf("\nInsira o estado de destino\nEstados disponiveis: [MG, SP, RJ, MS]: ");
    scanf("%s", &estado);
    
    if (strcmp(estado, "MG") == 0 || strcmp(estado, "mg") == 0) {
        valor_final = valor + (valor*0.07);
        printf("O valor final para o estado de MG e: %.2f", valor_final);
    }
    else if (strcmp(estado, "SP") == 0 || strcmp(estado, "sp") == 0) {
        valor_final = valor + (valor*0.12);
        printf("O valor final para o estado de SP e: %.2f", valor_final);
    }
    else if (strcmp(estado, "RJ") == 0 || strcmp(estado, "rj") == 0) {
        valor_final = valor + (valor*0.15);
        printf("O valor final para o estado de RJ e: %.2f", valor_final);
    }
    else if (strcmp(estado, "MS") == 0 || strcmp(estado, "ms") == 0) {
        valor_final = valor + (valor*0.08);
        printf("O valor final para o estado de MS e: %.2f", valor_final);
    }
    else if (valor <= 0) {
        printf("Insira um valor valido.");
    }
     else {
        printf("Este estado não está disponivel na lista!");
    }
    

    return 0;
}