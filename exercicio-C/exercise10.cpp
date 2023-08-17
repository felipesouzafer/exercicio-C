#include <stdio.h>
int main(){
	int numero, i = 1;
	printf("Digite um número \n");
	scanf("%d", &numero);
	while(i <= 9){
		printf("%d %d : %d \n", numero, i, numero);
		i = i++;
	}
	return 0;
}
