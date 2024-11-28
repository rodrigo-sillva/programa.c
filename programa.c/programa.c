
int main() {
    // Declaração das variáveis
    int num1, num2, num3;
    int soma, subtracao, multiplicacao;
    float divisao;

    // Entrada dos números
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &num3);

    // Operações aritméticas
    soma = num1 + num2 + num3;
    subtracao = num1 - num2 - num3;
    multiplicacao = num1 * num2 * num3;
    divisao = (float) num1 / num2;  // Conversão para float para evitar divisão inteira

    // Resultados das operações
    printf("\nResultados das Operações Aritméticas:\n");
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão (num1 / num2): %.2f\n", divisao);

    // Comparações com operadores relacionais
    printf("\nComparações entre os números:\n");
    printf("num1 > num2: %s\n", (num1 > num2) ? "Verdadeiro" : "Falso");
    printf("num2 < num3: %s\n", (num2 < num3) ? "Verdadeiro" : "Falso");
    printf("num1 == num3: %s\n", (num1 == num3) ? "Verdadeiro" : "Falso");

    // Combinação lógica
    printf("\nCondições lógicas:\n");
    printf("num1 > num2 E num2 > num3: %s\n", 
           (num1 > num2 && num2 > num3) ? "Verdadeiro" : "Falso");
    printf("num1 é par OU num3 é ímpar: %s\n", 
           ((num1 % 2 == 0) || (num3 % 2 != 0)) ? "Verdadeiro" : "Falso");

    return 0;
}
