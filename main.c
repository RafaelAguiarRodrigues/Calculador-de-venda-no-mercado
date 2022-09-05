#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* faça um programa que receba como dados de entrada o valor de uma compra e a quantidade de parcelas e mostre como resultado:
a) compras com parcela ate 3x, mostrar o valor da compra de 3% de juros;
b) compras com parcela acima de 3x, mostrar o valor de 10% de juros;
c) valor pago a vista mostrara compra com desconto de 5%;
 */

int main() {
	setlocale(LC_ALL, "Portuguese");
	system ("color f0");
	
	float compras, parcelas;
	int opParcelas;
	
	while (1) {
		printf("Digite o valor da compras:\n");
		scanf("%f", &compras);
		printf("Você quer parcelado ou a vista?\n 1) A vista\n 2) Parcelado\n");
		scanf("%d", &opParcelas);
	
		switch (opParcelas) {
			default: 
				printf("Digite em quantas parcelas:\n");
				scanf("%f", &parcelas);
				if (parcelas > 3) {
					compras = compras * 1.1;
					printf("O valor da compra é %.2f\n", compras);
					printf("O valor do juros é %.2f\n\n", compras * 0.1);
				} else {
					compras = compras * 1.03;
					printf("O valor da compra é %.2f\n", compras);
					printf("O valor do juros é %.2f\n\n", compras * 0.03);
				}
			break;
			case 1:
				compras = compras * 0.95;
				printf("O valor da compra é %.2f!\n", compras);
				printf("O desconto é %.2f!\n\n", compras * 0.05);	
			break;
		}
		printf("Obrigado pela preferencia, Volte sempre!\n\n");
	}
}
