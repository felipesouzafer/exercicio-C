#include <stdio.h>
int main(){
	printf("Digite um caractere \n");
	scanf("%c, &c");
	if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u')) {
		printf("É vogal \n");
	} else{
		printf("Não é vogal \n");
	}
}
