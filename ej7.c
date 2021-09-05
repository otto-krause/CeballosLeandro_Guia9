#include<stdio.h>
int main()
{ int in, v=1, d=1, t=0, tg=0, m=0; while (v<=20){d=0; t=0;
  do {printf("Ingrese la cantidad de unidades vendidas del vendedor %i en el dia %i ", v, d); scanf("%i", &in); t+=in; tg+=in; if (m<in){m=in;} d++;} while(d<=15);
  printf("El total de unidades vendidas del vendedor %i es %i: ", v, t); v++;} printf("\n"); printf("El total de ventas es %i: ", tg); printf("\n");
  printf("La venta mas alta en un dia es %i: ", m); return 0;

}
