/* Leia um ângulo em graus e apresente-o convertido em radianos. A
fórmula de conversão é R = G * π/180, sendo G o ângulo em graus e R em
radianos e π = 3.141592. */

#include <stdio.h>
#include <stdlib.h>

int main() {

  float graus, radianos;
  float pi = 3.141592;

  printf("Informe o valor em graus:");
  scanf("%f", &graus);

  radianos = graus * pi / 180;

  printf("A valor em graus (%.2f) convertido para radianos e: %.2f", graus, radianos);

  return 0;
}