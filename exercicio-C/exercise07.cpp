#include <stdio.h>
int main(){
	int horas;
	printf("Que horas são? [0-23] \n");
	scanf("%d", &horas);
	if ((horas > 3) && (horas < 12)){
		printf("Bom dia \n");
	} else if(horas >= 12) && (horas < 18){
		printf("Boa tarde \n");
	}else:
		printf("Boa noite \n");
}
