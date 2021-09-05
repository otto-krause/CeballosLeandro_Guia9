#include<stdio.h>
int main()
{ int s, sm=0, su=0, w=1; while(w<=20){printf("Ingrese el sueldo de la persona %i: ", w); scanf("%i", &s); if(s>2000){sm++;} else{su++;} w++;}
  printf("El nro de personas que ganan mas de 2000$ son %i: ", sm); printf("\n El nro de personas que ganan menos de 2000$ son %i: ", su); }
