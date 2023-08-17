#include <stdio.h>
int cont, soma;
cont = 1;
soma = 0;
do{
	soma = soma + cont;
	cont = cont + 1;
} while (cont <= 5); 
printf("Soma dos 5 primeiros números naturais: %d \n", soma);
