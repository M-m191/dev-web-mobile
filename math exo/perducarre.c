#include <stdio.h>

// Fonction pour calculer le périmètre d'un carré
float perimetreCarre(float cote) {
    return 4 * cote;
}

int main() {
    float cote, perimetre;

    printf("Entrez la longueur du côté du carré : ");
    scanf("%f", &cote);

    perimetre = perimetreCarre(cote);

    printf("Le périmètre du carré est : %.2f\n", perimetre);

    return 0;
}