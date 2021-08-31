#include<stdio.h>
int main()
{ int n=1, input, alto, total; while (n<=15) {printf("Ingrese el nro %i: ", n); scanf("%i", &input); n++; total+=input; if(input>alto) alto=input;} 
  printf("El mayor es %i el promedio es %i: ", alto, input); 
}