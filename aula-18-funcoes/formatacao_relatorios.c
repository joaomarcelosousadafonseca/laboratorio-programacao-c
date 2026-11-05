#include <stdio.h>

void exibirLinha() {
    printf("**********\n");
}

int main() {
    exibirLinha();
    printf("RELATORIO DE ESTOQUE\n");
    exibirLinha();

    return 0;
}

O programa cria a função exibirLinha(), que não recebe parâmetros e não retorna nenhum valor, sendo responsável por imprimir dez asteriscos na tela. Na função principal (main), essa função é chamada antes e depois do título "RELATORIO DE ESTOQUE", criando separadores visuais e deixando o relatório mais organizado.
