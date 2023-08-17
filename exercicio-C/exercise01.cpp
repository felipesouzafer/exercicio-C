#include <stdio.h>
int main(){
	int divida, compra;
	divida = 0;
	compra = 100;
	divida = divida + compra;
    compra = 200;
    divida = divida + compra;
    compra = 300;
    divida = divida + compra;
    printf("Dívida: %d \n", divida);
    return 0;
}
