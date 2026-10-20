#include <stdio.h>
#include <stdlib.h>
#include <emscripten/emscripten.h> // Biblioteca opcional para marcações do Wasm

// EMSCRIPTEN_KEEPALIVE garante que o compilador não "apague" a função por otimização
EMSCRIPTEN_KEEPALIVE
int encontrar_maior(int* arr, int tamanho) {
    if (tamanho <= 0) return -1;
    int maior = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}