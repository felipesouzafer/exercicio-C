#include <stdio.h>
int main(){
	float mp, avf, mf;
	printf("Digite a média ponderada \n");
	scanf("%f", &mp);
	printf("Digite a nota da avaliação final \n");
	scanf("%f", &avf);
	mf = (mp + avf) / 2
	if (mf>=5) {
		 printf("Aprovado \n");
	} else{
		printf("Reprovado \n");
	}
}
