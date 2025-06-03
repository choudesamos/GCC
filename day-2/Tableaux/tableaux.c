#include <stdio.h>

int main() {
    int taille, i;

    // Demander la taille du tableau
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    // Création du tableau
    int tableau[100]; // taille maximale de 100 pour cet exemple

    // Vérification de la taille
    if (taille > 100 || taille <= 0) {
        printf("Taille invalide. Veuillez entrer une valeur entre 1 et 100.\n");
        return 1;
    }

    // Remplissage du tableau
    for (i = 0; i < taille; i++) {
        printf("Entrez la valeur pour l'élément %d : ", i);
        scanf("%d", &tableau[i]);
    }

    // Affichage du tableau
    printf("Contenu du tableau :\n");
    for (i = 0; i < taille; i++) {
        printf("Élément %d : %d\n", i, tableau[i]);
    }

    return 0;
}

