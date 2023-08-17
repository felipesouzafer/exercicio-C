#include <stdio.h>
int main(){
	int categoria; float preco;
	preco = 0;
	scanf("%d", &categoria);
	switch(categoria){
		case 1: preco = 10; break;
		case 2: preco = 18; break;
		case 3: preco = 23; break;
		case 4: preco = 26; break;
		case 5: preco =  31; break;
		default: printf("Categoria inexistente \n"); break;
	}
	printf("O preço do produto é %f \n", preco);
}
