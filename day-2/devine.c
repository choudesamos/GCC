#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nombreMystere, nombreUtilisateur;
    int essais, maxEssais = 10;
    char rejouer;

    srand(time(NULL));  // Initialiser le générateur de nombres aléatoires

    do {
        // Générer un nouveau nombre mystère entre 1 et 100
        nombreMystere = (rand() % 100) + 1;
        essais = 0;

        printf("🎯 Bienvenue dans le jeu du Nombre Mystère !\n");
        printf("🔢 Devine un nombre entre 1 et 100 (Tu as %d essais) !\n", maxEssais);

        while (essais < maxEssais) {
            printf("👉 Essaie #%d : ", essais + 1);
            scanf("%d", &nombreUtilisateur);
            essais++;

            if (nombreUtilisateur < nombreMystere) {
                printf("😅 Trop petit ! Essaie encore.\n");
            } else if (nombreUtilisateur > nombreMystere) {
                printf("😮 Trop grand ! Ne lâche rien.\n");
            } else {
                printf("🎉 Bravo ! Tu as trouvé le nombre mystère en %d essai(s) !\n", essais);
                break;
            }
        }

        if (nombreUtilisateur != nombreMystere) {
            printf("💥 Perdu ! Le nombre mystère était %d.\n", nombreMystere);
        }

        // Demander à l'utilisateur s'il veut rejouer
        printf("🔁 Veux-tu rejouer ? (o/n) : ");
        scanf(" %c", &rejouer); // espace avant %c pour ignorer les retours à la ligne

        printf("\n");

    } while (rejouer == 'o' || rejouer == 'O');

    printf("👋 Merci d'avoir joué ! À bientôt.\n");

    return 0;
}

