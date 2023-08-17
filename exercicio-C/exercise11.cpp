#include <stdio.h>
int main(){
	/* pROGRAMA QUE RECEBE 10 NUMEROS E INFORMAR OI MAIOR VALOR E O MENOR DIGITADO*/
	int num, menor, maior, i;
	for(i =1; i<= 10 ;i++);
	printf("Daigite um número: \n");
	scanf("%d", &num);
	if (i == 1){
		maior = num;
		menor = num;
	}else{
		if (num > maior){
			maior = num;
		}
		if (num < menor){
		menor = num; 
	}
}
}
