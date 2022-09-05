/* A importância de R$ 780.000,00 será dividida entre três ganhadores de
um concurso, sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores. */

#include<stdio.h>
#include<stdlib.h>

int main() {

  int valortotal = 780000;
  float ganhador1;
  float ganhador2;
  float ganhador3;
  
ganhador1 = (46 * valortotal) / 100;
ganhador2 = (32 * valortotal) / 100;
ganhador3 = (22 * valortotal) / 100;

printf("O primeiro ganhador recebeu: %.2f \nO Segundo ganhador recebeu: %.2f \nO Terceiro ganhador recebeu: %.2f", ganhador1, ganhador2, ganhador3);

  
  return 0;
}