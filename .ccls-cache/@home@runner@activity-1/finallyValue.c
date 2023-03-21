#include <stdio.h>
int main() {
 float valorEtiqueta, valorFinal;
 int codigoPagamento;
 printf("Digite o valor da etiqueta: ");
 scanf("%f", &valorEtiqueta);
 printf("\nDigite o codigo de pagamento (1 - a vista em dinheiro, 2 - a vista no cartao de credito, 3 - duas vezes sem juros, 4 - tres vezes com juros): ");
 scanf("%d", &codigoPagamento);
 switch (codigoPagamento) {
 case 1:
 valorFinal = valorEtiqueta * 0.9;
 break;
 case 2:
 valorFinal = valorEtiqueta * 0.95;
 break;
 case 3:
 valorFinal = valorEtiqueta;
 break;
 case 4:
 valorFinal = valorEtiqueta * 1.1;
 break;
 default:
 printf("\nCodigo de pagamento invalido.");
 return 0;
 }
 printf("\nValor final a pagar: R$ %.2f\n", valorFinal);
 return 0;
}