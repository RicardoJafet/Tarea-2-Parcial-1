/*Autor: Ricardo Jafet Granados Chable, Realizado: 15/02/2022
	Decimo Quinto programa en C: Factura de una compañia de telefonia celular.
	*/

#include<stdio.h>

int main() { 
	char tipo; 
	float tiempo, total, cantidad, hora; 
	int cuenta;
	printf("--------------------------------\n");
	printf("Factura de telefonia");
	printf("\n--------------------------------");
	printf("\nQue tipo de servicio tienes? (1. Regular   2. Premium): ");
	scanf("%d", &tipo);
	printf("Porfavor introduce tu numero de cuenta: ");
	scanf("%d", &cuenta);
	printf("Tiempo utilizado de llamada: ");
	scanf("%f", &tiempo);
	printf("--------------------------------\n");
	if(tipo==1) { 
		total = (tiempo + 50) * 0.20 + 10;
		printf("Numero de cuenta: %d\n", cuenta);
		printf("\nCantidad a pagar: $%.2f ", total);
	}
	else{
		if(tipo==2) {
			printf("Hora de llamada: ");
	        scanf("%f", &hora);
		if(hora>=6){
			if(tiempo==75){
				printf("Los primeros 75 minutos son gratis");
				}else{
					if(tiempo>75){
					total = (tiempo + 75) * 0.10;
					printf("Numero de cuenta: %d\n", cuenta);
		            printf("\nCantidad a pagar: $%.2f ", total);	
					}
				}
		}else{
				if(hora>=18){
			if(tiempo==100){
				printf("Los primeros 100 minutos son gratis");
				}else{
					if(tiempo>100){
						total = (tiempo + 100) * 0.05;
					    printf("Numero de cuenta: %d\n", cuenta);
		                printf("\nCantidad a pagar: $%.2f ", total);
					}
				}
	}
		}
	}
	}
	return 0; 
}
