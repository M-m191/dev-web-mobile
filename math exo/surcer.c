3#include <stdio.h>
#define PI 3.14159265359

// Fonction pour calculer la surface d'un cercle
float surfaceCercle(float rayon) {
    return PI * rayon * rayon;
}

int main() {
    float rayon, surface;

    printf("Entrez le rayon du cercle : ");
    scanf("%f", &rayon);

    surface = surfaceCercle(rayon);

    printf("La surface du cercle est : %.2f\n", surface);

    return 0;
}
