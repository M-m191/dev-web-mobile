#include <stdio.h>

// Fonction pour calculer la surface d'un carré
float surfaceCarre(float cote) {
    return cote * cote;
}

int main() {
    float cote, surface;

    printf("Entrez la longueur du côté du carré : ");
    scanf("%f", &cote);

    surface = surfaceCarre(cote);

    printf("La surface du carré est : %.2f\n", surface);

    return 0;
}
