/*Faça um programa que leia um número e, caso ele seja positivo, calcule
e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado. */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

    int num, quadrado;
    float raiz;

    printf("Insira um numero positivo:");
    scanf("%d", &num);

    quadrado = num * num;
    raiz = sqrt(num);

    if (num <= 0) {
        printf("Insira um numero valido.");
    } else if (num > 0) {
        printf("O numero %d ao quadrado e: %d\nA raiz quadrada do numero %d e: %.3f", num, quadrado, num, raiz);
    }

    return 0;
}