#include <math.h>
#include <stdio.h>
int main() {
  printf("Nome: Ricardo Matos de Azevedo Bossan\n");
  printf("Curso: Análise e Desenvolvimento de Sistemas\n");
  printf("Universidade: Unilasalle\n");
  printf("matrícula: 202210731\n");

  int opName = 0;
  while (opName <= 0 || opName > 6) {
    printf("Qual operação deseja realizar (digite o número correspondente da "
           "lista a seguir)?\n1. soma\n2. subtração\n3. divisão\n4. "
           "multiplicação\n5. raiz quadrada\n6. potência\n");
    scanf("%d", &opName);
  }

  float op1, op2;
  int eqZero = 1;
  if (opName == 3) {
    while (eqZero == 1) {
      printf("Digite os operandos 1 e 2, separados por espaço:\n");
      scanf("%f %f", &op1, &op2);
      if (op2 == 0) {
        printf(
            "O divisor não pode ser igual a 0. Por favor tente novamente.\n");
      } else {
        eqZero = 0;
      }
    }
  } else if (opName != 5) {
    printf("Digite os operandos 1 e 2, separados por espaço:\n");
    scanf("%f %f", &op1, &op2);
  } else {
    printf("Digite o operando:\n");
    scanf("%f", &op1);
  }

  float resultado;

  switch (opName) {
  case 1:
    resultado = op1 + op2;
    break;
  case 2:
    resultado = op1 - op2;
    break;
  case 3:
    resultado = op1 / op2;
    break;
  case 4:
    resultado = op1 * op2;
    break;
  case 5:
    resultado = sqrt(op1);
    break;
  case 6:
    resultado = powf(op1, op2);
    break;
  }

  printf("%.2f", resultado);
}
