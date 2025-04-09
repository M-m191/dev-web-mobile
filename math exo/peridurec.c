#include <stdio.h>

// Fonction pour calculer le périmètre d'un rectangle
float perimetreRectangle(float longueur, float largeur) {
    return 2 * (longueur + largeur);
}

int main() {
    float longueur, largeur, perimetre;

    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &longueur);

    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &largeur);

    perimetre = perimetreRectangle(longueur, largeur);

    printf("Le périmètre du rectangle est : %.2f\n", perimetre);

    return 0;
}