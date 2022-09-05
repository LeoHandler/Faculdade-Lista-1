/* Faça um programa que leia a altura e o peso de uma pessoa. De acordo
com a tabela a seguir, verifique e mostre qual a classificação dessa pessoa. */

#include<stdio.h>
#include<stdlib.h>

int main() {

    float altura, peso;
    char grupo;

    printf("\nDigite a altura: ");
    scanf("%f", &altura);

    printf("Digite o peso: ");
    scanf("%f", &peso);
  if (altura < 1.2) {
    grupo = peso < 60 ? 'A' : (peso <= 90 ? 'D' : 'G'); 
  } else if (altura < 1.7) {
    grupo = peso < 60 ? 'B' : (peso <= 90 ? 'E' : 'H');
  } else {
    grupo = peso < 60 ? 'C' : (peso <= 90 ? 'F' : 'I');
  }
  printf("\nVoce esta no grupo: '%c'\n", grupo);

  return 0;
}