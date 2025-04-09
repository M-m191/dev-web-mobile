#include <stdio.h>
#define PI 3.14159265359

// Fonction pour calculer le périmètre d'un cercle
float perimetreCercle(float rayon) {
    return 2 * PI * rayon;
}

int main() {
    float rayon, perimetre;

    printf("Entrez le rayon du cercle : ");
    scanf("%f", &rayon);

    perimetre = perimetreCercle(rayon);

    printf("Le périmètre du cercle est : %.2f\n", perimetre);

    return 0;
}