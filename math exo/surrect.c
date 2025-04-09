#include <stdio.h>

// Fonction pour calculer la surface d'un rectangle
float surfaceRectangle(float longueur, float largeur) {
    return longueur * largeur;
}

int main() {
    float longueur, largeur, surface;

    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &longueur);

    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &largeur);

    surface = surfaceRectangle(longueur, largeur);

    printf("La surface du rectangle est : %.2f\n", surface);

    return 0;
}