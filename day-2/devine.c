#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nombreMystere, nombreUtilisateur;
    int essais = 0;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));  // Nécessaire pour avoir un nombre différent à chaque exécution
    nombreMystere = (rand() % 100) + 1;  // Génère un nombre entre 1 et 100

    printf("Bienvenue dans le jeu du nombre mystère !\n");
    printf("Devine un nombre entre 1 et 100.\n");

    // Boucle de jeu
    while (1) {
        printf("Entre un nombre : ");
        scanf("%d", &nombreUtilisateur);
        essais++;

        if (nombreUtilisateur < nombreMystere) {
            printf("Trop petit !\n");
        } else if (nombreUtilisateur > nombreMystere) {
            printf("Trop grand !\n");
        } else {
            printf("Bravo ! Tu as trouvé en %d essais !\n", essais);
            break;  // Sortir de la boucle
        }
    }

    return 0;
}

