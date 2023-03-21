#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
  float altura, peso_ideal;
  char sexo;
  
  // Solicita a altura
  printf("Digite a altura (em metros): ");
  if (scanf("%f", &altura) != 1 || altura <= 0) {
    printf("Altura inválida. Insira um número positivo.\n");
    return 1;
  }
  
  // Solicita o sexo
  printf("Digite o sexo (m/f): ");
  do {
    if (scanf(" %c", &sexo) != 1 || tolower(sexo) != 'm' && tolower(sexo) != 'f') {
      printf("Sexo inválido. Insira 'm' ou 'f'.\n");
      return 1;
    }
  } while (sexo != 'm' && sexo != 'f');
  
  // Calcula o peso ideal
  if (sexo == 'm') {
    peso_ideal = 72.7 * altura - 58;
  } else if (sexo == 'f') {
    peso_ideal = 62.1 * altura - 44.7;
  }
  
  // Exibe o resultado
  printf("O peso ideal é: %.2f kg\n", peso_ideal);
  return 0;
}
