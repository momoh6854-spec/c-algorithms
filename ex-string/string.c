#include <stdio.h>

int main(void) {
    char T[50];

    printf("Entrez votre nom : ");
    fgets(T, sizeof(T), stdin);

    printf("Votre nom est : %s", T);

    return 0;
}