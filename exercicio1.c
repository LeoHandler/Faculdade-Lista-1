/* Leia quatro valores do tipo float. Calcule e exiba a média aritmética
desses valores. */

#include <stdio.h>
#include <stdlib.h>

int main() {

  float num1, num2, num3, num4;
  float media;

  printf("Insira os valores:");
  scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

  media = (num1 + num2 + num3 + num4) / 4;

  printf("A média é: %2.f", media);

  return 0;
}