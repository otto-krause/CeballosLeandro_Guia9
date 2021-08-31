#include<stdio.h>
int main()
{ int n, fact=1; printf("Ingrese el nro "); scanf("%i", &n); while (n>1) {fact*=n; n--;} 
  printf("El factorial es: %i ", fact);
}