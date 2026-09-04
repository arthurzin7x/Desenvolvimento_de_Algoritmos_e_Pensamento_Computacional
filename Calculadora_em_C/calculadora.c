#include <stdio.h>

#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {

    int opcao;
    float num1, num2, resultado;

    printf("========== CALCULADORA ==========");
    printf("\n");
    printf("1.  Adição\n");
    printf("2.  Subtração\n");
    printf("3.  Multiplicação\n");
    printf("4.  Divisão\n");
    printf("5.  Porcentagem\n");
    printf("6.  Média de dois números\n");
    printf("7.  Quadrado\n");
    printf("8.  Cubo\n");
    printf("9.  Dobro\n");
    printf("10. Triplo\n");
    printf("11. Metade\n");
    printf("12. Potência\n");
    printf("13. Raiz quadrada\n");
    printf("14. Raiz cúbica\n");
    printf("15. Módulo\n");
    printf("16. Seno\n");
    printf("17. Cosseno\n");
    printf("18. Tangente\n");
    printf("19. Maior número\n");
    printf("20. Menor número\n");
    printf("=================================\n");

    printf("Digite a opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 2) {
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        resultado = num1 - num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 3) {
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        resultado = num1 * num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 4) {
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %.2f\n", resultado);
        } else {
            printf("Erro: não é possível dividir por zero.\n");
        }
    } else if (opcao == 5) {
        printf("Digite o número: ");
        scanf("%f", &num1);
        printf("Digite a porcentagem: ");
        scanf("%f", &num2);
        resultado = (num1 * num2) / 100;
        printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 6) {
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        resultado = (num1 + num2) / 2;
        printf("Média: %.2f\n", resultado);
    } else if (opcao == 7) {
        printf("Digite um número: ");
        scanf("%f", &num1);
        resultado = num1 * num1;
        printf("Quadrado: %.2f\n", resultado);
    } else if (opcao == 8) {
        printf("Digite um número: ");
        scanf("%f", &num1);
        resultado = num1 * num1 * num1;
        printf("Cubo: %.2f\n", resultado);
    } else if (opcao == 9) {
        printf("Digite um número: ");
        scanf("%f", &num1);
        resultado = num1 * 2;
        printf("Dobro: %.2f\n", resultado);
    } else if (opcao == 10) {
        printf("Digite um número: ");
        scanf("%f", &num1);
        resultado = num1 * 3;
        printf("Triplo: %.2f\n", resultado);
    } else if (opcao == 11) {
        printf("Digite um número: ");
        scanf("%f", &num1);
        resultado = num1 / 2;
        printf("Metade: %.2f\n", resultado);
    } else if (opcao == 12) {
        printf("Digite a base: ");
        scanf("%f", &num1);
        printf("Digite o expoente: ");
        scanf("%f", &num2);
        resultado = pow(num1, num2);
        printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 13) {
        printf("Digite um número: ");
        scanf("%f", &num1);
        if (num1 >= 0) {
            resultado = sqrt(num1);
            printf("Raiz quadrada: %.2f\n", resultado);
        } else {
            printf("Erro: não existe raiz quadrada real de número negativo.\n");
        }
    } else if (opcao == 14) {
        printf("Digite um número: ");
        scanf("%f", &num1);
        resultado = cbrt(num1);
        printf("Raiz cúbica: %.2f\n", resultado);
    } else if (opcao == 15) {
        printf("Digite um número: ");
        scanf("%f", &num1);
        resultado = fabs(num1);
        printf("Módulo: %.2f\n", resultado);
    } else if (opcao == 16) {
        printf("Digite o ângulo em graus: ");
        scanf("%f", &num1);
        resultado = sin(num1 * M_PI / 180.0);
        printf("Seno: %.4f\n", resultado);
    } else if (opcao == 17) {
        printf("Digite o ângulo em graus: ");
        scanf("%f", &num1);
        resultado = cos(num1 * M_PI / 180.0);
        printf("Cosseno: %.4f\n", resultado);
    } else if (opcao == 18) {
        printf("Digite o ângulo em graus: ");
        scanf("%f", &num1);
        resultado = tan(num1 * M_PI / 180.0);
        printf("Tangente: %.4f\n", resultado);
    } else if (opcao == 19) {
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        if (num1 > num2) {
            printf("O maior número é: %.2f\n", num1);
        } else if (num2 > num1) {
            printf("O maior número é: %.2f\n", num2);
        } else {
            printf("Os dois números são iguais.\n");
        }
    } else if (opcao == 20) {
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        if (num1 < num2) {
            printf("O menor número é: %.2f\n", num1);
        } else if (num2 < num1) {
            printf("O menor número é: %.2f\n", num2);
        } else {
            printf("Os dois números são iguais.\n");
        }
    } else {
        printf("Opção inválida! Escolha uma opção de 1 a 20.\n");
    }

    return 0;
}
