#include<stdio.h>
int main()
{ int v, w=1, p=0, n=0, c=0; do{printf("Ingrese el valor %i ", w); scanf("%i", &v); if(v>0){p++;}else if(v<0){n++;}else{c++;} w++;}
  while(w<=10); printf ("La cantidad de nros positivos son %i: ", p); printf("\n"); printf("La cantidad de nros negativos son %i ", n);
  printf("\n"); printf("La cantidad de nros iguales a cero son: %i", c);
}
