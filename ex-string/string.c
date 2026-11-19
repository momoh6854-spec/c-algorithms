#include <stdio.h>
/*ex01 */
int main(void) {
    char T[50];

    printf("Entrez votre nom : ");
    fgets(T, sizeof(T), stdin);

    printf("Votre nom est : %s", T);

    return 0;
}
/*exo02 : same methdod using the printf */
int main(void) {
    char T[50];

    printf("Entrez votre nom : ");
    scanf("%c ",&t[i]);
    printf("Votre nom est : %s", T);

    return 0;
}
