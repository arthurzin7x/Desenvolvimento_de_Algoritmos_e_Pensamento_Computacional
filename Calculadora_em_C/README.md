"Calculadora Completa em C"

-Identificação do Estudante 

-Nome do Estudante:Arthur da Silva Rodrigues 

-Curso:ADS- analise e desenvolvimento de sistemas 

-Disciplina:Desenvolvimento de Algoritmos e Pensamento Computacional

-Instituição:UDF



-Descrição do Projeto
Este projeto consiste no desenvolvimento de uma calculadora interativa escrita na linguagem C, projetada para ser executada em ambiente de terminal (Prompt de Comando/Terminal Linux). O projeto foi desenvolvido como parte prática da disciplina de *Desenvolvimento de Algoritmos e Pensamento Computacional*, demonstrando a aplicação prática dos fundamentos de programação estruturada, modularização de código e cálculos matemáticos.



-Objetivo da Calculadora
O objetivo principal desta aplicação é disponibilizar uma ferramenta abrangente e fácil de usar para a realização de operações aritméticas básicas, cálculos avançados, funções trigonométricas e estatísticas simples. Além disso, busca demonstrar o uso de boas práticas de programação em C, tais como divisão do código em funções reutilizáveis, tratamento básico de erros de entrada e interface amigável via menu interativo.




-Funcionalidades Implementadas

-Operações Básicas: Adição, subtração, multiplicação, divisão e resto da divisão (módulo).

-Operações Avançadas: Potenciação, raiz quadrada, fatorial e cálculo de porcentagem.

-Funções Trigonométricas:Seno, cosseno, tangente e conversões de unidades (graus para radianos).

-Cálculos Logarítmicos e Esféricos: Logaritmo natural (base *e*), logaritmo na base 10 e cálculo de valor absoluto.

-Análise Estatística e Utilitários: Média aritmética de dois números, cálculo de quadrado, cubo e inverso de um número ($1/x$).

-Menu Interativo Continuo: O usuário pode realizar múltiplos cálculos sem precisar reiniciar o programa.



-Relação das 20 Funções Desenvolvidas

Abaixo está a lista detalhada das 20 funções que compõem o núcleo de cálculos do sistema:

1. `somar(float a, float b)`: Retorna a soma de dois números ($a + b$).

2. `subtrair(float a, float b)`: Retorna a diferença entre dois números ($a - b$).

3. `multiplicar(float a, float b)`: Retorna o produto de dois números ($a \times b$).

4. `dividir(float a, float b)`: Realiza a divisão ($a / b$), tratando a divisão por zero.

5. `resto_divisao(int a, int b)`: Retorna o resto da divisão inteira ($a \pmod b$).

6. `potencia(double base, double expoente)`: Calcula a potência de um número ($base^{expoente}$).

7. `raiz_quadrada(double num)`: Retorna a raiz quadrada ($\sqrt{x}$), validando entradas não negativas.

8. `fatorial(int n)`: Calcula o fatorial de um número inteiro não negativo ($n!$).

9. `porcentagem(float total, float percentual)`: Calcula uma porcentagem relativa sobre um valor total.

10. `calcular_seno(double angulo_graus)`: Converte o ângulo para radianos e calcula o seno.

11. `calcular_cosseno(double angulo_graus)`: Converte o ângulo para radianos e calcula o cosseno.

12. `calcular_tangente(double angulo_graus)`: Converte o ângulo para radianos e calcula a tangente.

13. `logaritmo_natural(double num)`: Retorna o logaritmo natural ($\ln(x)$) para $x > 0$.

14. `logaritmo_base10(double num)`: Retorna o logaritmo na base 10 ($\log_{10}(x)$) para $x > 0$.

15. `valor_absoluto(double num)`: Retorna o valor absoluto/módulo de um número ($\vert{}x\vert{}$).

16. `calcular_quadrado(double num)`: Retorna o número elevado ao quadrado ($x^2$).

17. `calcular_cubo(double num)`: Retorna o número elevado ao cubo ($x^3$).

18. `inverso_numero(double num)`: Retorna o inverso multiplicativo de um número ($1/x$).

19. `media_dois_numeros(float a, float b)`: Calcula a média aritmética simples de dois valores.

20. `graus_para_radianos(double graus)`: Função auxiliar para converter ângulos em graus para radianos ($\text{rad} = \text{graus} \times \frac{\pi}{180}$).



-Bibliotecas Utilizadas
* `<stdio.h>`: Fornece as funções padrão de entrada e saída de dados, tais como `printf()` para exibir informações na tela e `scanf()` para leitura do teclado.
* `<stdlib.h>`: Utilizada para funções de utilidade geral, incluindo o controle de fluxo de execução (como `system("clear")` ou `system("cls")` para limpar a tela).
* `<math.h>`: Biblioteca fundamental para operações matemáticas avançadas, fornecendo funções prontas como `pow()`, `sqrt()`, `sin()`, `cos()`, `tan()`, `log()`, `log10()` e `fabs()`.



-Organização do Código
O código-fonte foi estruturado de forma **modular e organizada**, dividindo responsabilidades de maneira clara:


-Declaração e Protótipos:-No início do arquivo `calculadora.c`, são declarados os protótipos de todas as 20 funções para garantir que o compilador reconheça suas assinaturas.

-Função Principal (`main`): Atua como o ponto de controle do programa. Ela contém o laço principal de repetição que exibe o menu, captura a opção escolhida pelo usuário e chama as funções correspondentes.

-Implementação das Funções: Todas as 20 funções estão implementadas abaixo do `main()`, mantendo a leitura limpa e de fácil manutenção.



-Conceitos de Programação Utilizados

1. Modularização e Funções: O programa evita repetição de código ao isolar cada cálculo em sua própria função com parâmetros de entrada e valores de retorno definidos.
2. Estruturas Condicionais: Uso extensivo de `if`, `else if` e `else` para validação de entradas (evitando divisão por zero ou raízes de números negativos) e da estrutura `switch/case` para navegação eficiente pelas opções do menu principal.
3. Estruturas de Repetição: Utilização do laço `do-while` para manter o programa em execução até que o usuário decida expressamente selecionar a opção de saída.
4. Entrada e Saída de Dados: Uso de `printf()` com formatação adequada de casas decimais (ex: `%.2f`) e `scanf()` para captura de dados do usuário.
5. Utilização da Biblioteca `math.h`:Aplicação prática de constantes matemáticas e funções prontas da biblioteca para garantir precisão nos cálculos complexos.



-Instruções para Compilação e Execução

-Pré-requisitos
Ter um compilador C instalado no seu sistema (como `GCC` ou `Clang`).

- Compilação (Terminal / Prompt de Comando)
Para compilar o código, abra o terminal na pasta onde o arquivo `calculadora.c` está salvo e execute o comando abaixo.
Importante: A flag `-lm` é necessária no Linux para vincular a biblioteca matemática (`math.h`).

-bash
gcc calculadora.c -o calculadora -lm
