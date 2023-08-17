#include <stdio.h>
int main(){
	int a, b;
	printf("Digite dois valores \n");
	scanf("%d %d", &a, &b);
    if (a > b){
    	printf("O primeiro número é maior \n");
	}
	if (b > a){
		printf("O segundo número é maior \n");
	}
}
