#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nombreMystere;
    int nombreUtilisateur;
    int essais = 0;

    // Initialisation du générateur de nombre aléatoire
    srand(time(NULL));
    nombreMystere = (rand() % 100) + 1; // nombre entre 1 et 100

    printf("🎮 Bienvenue dans le jeu du Nombre Mystère !\n");
    printf("Devine un nombre entre 1 et 100.\n");

    // Boucle principale du jeu
    while (1) {
        printf("👉 Ta proposition : ");
        scanf("%d", &nombreUtilisateur);
        essais++;

        if (nombreUtilisateur < nombreMystere) {
            printf("😅 Trop petit !\n");
        } else if (nombreUtilisateur > nombreMystere) {
            printf("😮 Trop grand !\n");
        } else {
            printf("🎉 Bravo ! Tu as trouvé le nombre en %d essai(s) !\n", essais);
            break;
        }
    }

    return 0;
}
