/* Faça um programa que leia três números inteiros positivos e efetue o
cálculo de uma das seguintes médias de acordo com um valor numérico
digitado pelo usuário e mostrado na tabela a seguir: */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  float num1, num2, num3, media;
  char select[3];

  printf("Insira 3 numeros inteiros positivos: ");
  scanf("%f %f %f", &num1, &num2, &num3);


printf("Selecione o tipo de media que deseja fazer: \n\n Pressione: \n G - Geometrica\n P - Ponderada \n H - Harmonica \n A - Aritmetica\n");
scanf("%s", &select);

if (strcmp(select, "G") == 0 || strcmp(select, "g") == 0) {
        media = num1 * num2 * num3;
        printf("Media Geometrica: %.0f", media);
    } else if (strcmp(select, "P") == 0 || strcmp(select, "p") == 0) {
        media = (num1 + (2*num2) + (3*num3)) /6;
        printf("Media Ponderada: %.0f", media);
    } else if (strcmp(select, "H") == 0 || strcmp(select, "h") == 0) {
        media = 1 / ((1/num1) + (1/num2) + (1/num3));;
        printf("Media Harmonica: %.0f", media);
    } else if (strcmp(select, "A") == 0 || strcmp(select, "a") == 0) {
        media = (num1 + num2 + num3) / 3;
        printf("Media Aritmetica: %.0f", media);
    } else {
      printf("Operação não encontrada.");
    }
    return 0;
}
