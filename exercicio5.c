/*  Leia o valor do raio de um círculo. Calcule e imprima a área do círculo
correspondente. A área do círculo é A = π* raio*raio, sendo π = 3.141592. */

#include <stdio.h>
#include <stdlib.h>

int main() {

  float pi = 3.141592;
  float raio, area;

  printf("Digite o valor do raio:");
  scanf("%f", &raio);

  area = pi * raio * raio;

  printf("O valor da area do circulo e igual a: %.2f", area);

  return 0;
}