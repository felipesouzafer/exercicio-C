#include <stdio.h>
int main(){
	printf("Digite um caractere \n");
	scanf("%c, &c");
	if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u')) {
		printf("� vogal \n");
	} else{
		printf("N�o � vogal \n");
	}
}
