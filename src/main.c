#include <stdio.h>
#include <ctype.h>

int main() {
    char phrase[100];
    int voyelles = 0;

    // on demande à l'utilisateur d'entrer une phrase
    printf("Entrez une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);

    for (int i = 0; phrase[i] != '\0'; i++) {
        // Vérifier si le caractère est une voyelle (en minuscule ou en majuscule)
        if (tolower(phrase[i]) == 'a' || tolower(phrase[i]) == 'e' || tolower(phrase[i]) == 'i' ||
            tolower(phrase[i]) == 'o' || tolower(phrase[i]) == 'u' || tolower(phrase[i]) == 'y') {
            voyelles++;
        }
    }

    //On affiche le nombre de voyelles dans la phrase
    printf("Le nombre de voyelles dans la phrase est : %d\n", voyelles);

    return 0;
}
