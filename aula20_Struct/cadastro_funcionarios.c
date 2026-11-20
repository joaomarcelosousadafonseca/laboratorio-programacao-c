#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main(void) {
    Funcionario funcionario1, funcionario2;
    float diferenca = 0;

    printf("=== CADASTRO DO PRIMEIRO FUNCIONARIO ===\n");
    printf("Nome: ");
    scanf(" %49[^\n]", funcionario1.nome);
    printf("Idade: ");
    scanf("%d", &funcionario1.idade);
    printf("Salario: ");
    scanf("%f", &funcionario1.salario);

    printf("\n=== CADASTRO DO SEGUNDO FUNCIONARIO ===\n");
    printf("Nome: ");
    scanf(" %49[^\n]", funcionario2.nome);
    printf("Idade: ");
    scanf("%d", &funcionario2.idade);
    printf("Salario: ");
    scanf("%f", &funcionario2.salario);

    printf("\n=== FUNCIONARIOS CADASTRADOS ===\n");
    printf("\nNome: %s\n", funcionario1.nome);
    printf("Idade: %d\n", funcionario1.idade);
    printf("Salario: R$ %.2f\n", funcionario1.salario);

    printf("\nNome: %s\n", funcionario2.nome);
    printf("Idade: %d\n", funcionario2.idade);
    printf("Salario: R$ %.2f\n", funcionario2.salario);

    printf("\n=== COMPARACAO DOS SALARIOS ===\n");

    if (funcionario1.salario > funcionario2.salario) {
        printf("%s possui o maior salario.\n", funcionario1.nome);
        diferenca = funcionario1.salario - funcionario2.salario;
    } else if (funcionario2.salario > funcionario1.salario) {
        printf("%s possui o maior salario.\n", funcionario2.nome);
        diferenca = funcionario2.salario - funcionario1.salario;
    } else {
        printf("Os dois funcionarios recebem o mesmo salario.\n");
    }

    printf("Diferenca salarial: R$ %.2f\n", diferenca);

    return 0;
}
