#include <stdio.h>
#define PI 3.14159265359

// Fonction pour calculer la surface d'une sphère
float surfaceSphere(float rayon) {
    return 4 * PI * rayon * rayon;
}

int main() {
    float rayon, surface;

    printf("Entrez le rayon de la sphère : ");
    scanf("%f", &rayon);

    surface = surfaceSphere(rayon);

    printf("La surface de la sphère est : %.2f\n", surface);

    return 0;
}
