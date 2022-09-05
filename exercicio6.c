/* Leia a altura e o raio de um cilindro circular e imprima o volume desse
cilindro. O volume de um cilindro circular é calculado por meio da seguinte
fórmula:
em que π = 3.141592. */

#include <stdio.h>
#include <stdlib.h>

int main() {

  float pi = 3.141592;
  float altura, volume, raio;

  printf("Informe o valor da altura:");
  scanf("%f", &altura);
  printf("Informe o valor da raio:");
  scanf("%f", &raio);

  volume = pi * raio * raio * altura;

  printf("%f", volume);

  return 0;
}