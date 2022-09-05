/* Leia um valor que represente uma temperatura em graus Celsius e
apresente-a convertida em graus Fahrenheit. A fórmula de conversão é:
F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a
temperatura em Celsius. */

#include <stdio.h>
#include <stdlib.h>

int main() {

  float celsius, fahrenheit;

  printf("Digite a temperatura em graus celsius");
  scanf("%f", &celsius);

  fahrenheit = (celsius * (9.0 / 5.0)) + 32.0;

  printf("A temperatura %.2f convertida para fahrenheit é igual a: %.2f", celsius,
         fahrenheit);

  return 0;
}