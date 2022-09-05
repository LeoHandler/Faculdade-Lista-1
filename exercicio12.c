#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

    float a, b, c, delta, sqrtdelta, raiz1, raiz2;

    printf("Digite os valores: (A, B, C)");
    scanf("%f %f %f", &a, &b, &c);

 delta = b*b-4*a*c;

 if(delta < 0) {
    printf("Não existe raiz.");
 } else if (delta == 0)
 {
    raiz1 = (-b + sqrt(delta))/(2*a);
    printf("Possui uma raiz: %.2f", raiz1);
 } else {
    raiz1 = (-b + sqrt(delta))/(2*a);
    raiz2 = (-b - sqrt(delta))/(2*a);
    printf("Possui as raizes: %.2f %.2f", raiz1, raiz2);
 }
 
    return 0;
}