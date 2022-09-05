/* Faça um programa que leia o salário de um trabalhador e o valor da
prestação de um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”
 */

#include<stdio.h>
#include<stdlib.h>

int main() {

    float salario, parcela, total;

    printf("Digite o valor do seu salário:");
    scanf("%f", &salario);
    printf("Digite o valor da parcela:");
    scanf("%f", &parcela);

    total = (salario*20)/100;

    if (parcela >= total) {
        printf("Empréstimo não concedido.");
    } else {
        printf("Empréstimo concedido.");
    }


    return 0;
}