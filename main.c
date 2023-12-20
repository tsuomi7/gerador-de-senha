#include <stdio.h>
#include <stdlib.h>

void TamanhoDaSenha(int *tamanho) {
    printf("Digite o tamanho da senha: ");
    scanf("%i", tamanho);
}

void GerarSenha(int tamanho, char *alfabeto) {
    printf("Senha gerada: ");

    for (int i = 0; i < tamanho; i++) {
        int indiceAleatorio = rand() % 59;
        printf("%c", alfabeto[indiceAleatorio]);
    }

    printf("\n");
}

int main() {
    int tamanhoSenha;

    TamanhoDaSenha(&tamanhoSenha);

    char *alfabeto = "abcdefghijklmnopqrstuvwxyz!@#$%&*()_+{}[]/?;:.>,<1234567890";

    GerarSenha(tamanhoSenha, alfabeto);

    return 0;
}
