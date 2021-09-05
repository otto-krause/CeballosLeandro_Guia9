#include<stdio.h>
int main()
{ int input, a=1, n=1, nt=0, t=0; while(a<=30){ while(n<=10){printf("Ingrese la nota %i del alumno %i: ", n, a); scanf("%i", &input); nt+=input; t+=input; n++;}
  printf("El promedio del alumno %i es %i: ", a, nt/10); nt=0; a++;} printf("El promedio total es %d ", t/300); return 0; }
