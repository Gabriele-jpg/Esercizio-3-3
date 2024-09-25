#include <stdio.h>
int main() {
    char iniziale;
    int eta;
    printf("Inserisci l'iniziale del nome: ");
    scanf(" %c", &iniziale);
    printf("Inserisci l'età: ");
    scanf("%d", &eta);
    if (eta >= 18) {
        eta = 18;
        printf("%c è maggiorenne.\n", iniziale);
    } else {
        printf("%c non è maggiorenne.\n", iniziale);
    }
    return 0;
}