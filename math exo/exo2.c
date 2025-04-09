#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

void calculCarre() {
    float cote, surface, perimetre;
    printf("Entrez la longueur du côté du carré : ");
    scanf("%f", &cote);
    surface = cote * cote;
    perimetre = 4 * cote;
    printf("Surface du carré : %.2f\n", surface);
    printf("Périmètre du carré : %.2f\n", perimetre);
}

void calculRectangle() {
    float longueur, largeur, surface, perimetre;
    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &longueur);
    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &largeur);
    surface = longueur * largeur;
    perimetre = 2 * (longueur + largeur);
    printf("Surface du rectangle : %.2f\n", surface);
    printf("Périmètre du rectangle : %.2f\n", perimetre);
}

void calculCercle() {
    float rayon, surface, perimetre;
    printf("Entrez le rayon du cercle : ");
    scanf("%f", &rayon);
    surface = PI * rayon * rayon;
    perimetre = 2 * PI * rayon;
    printf("Surface du cercle : %.2f\n", surface);
    printf("Périmètre du cercle : %.2f\n", perimetre);
}

void calculSphere() {
    float rayon, surface, volume;
    printf("Entrez le rayon de la sphère : ");
    scanf("%f", &rayon);
    surface = 4 * PI * rayon * rayon;
    volume = (4.0 / 3.0) * PI * rayon * rayon * rayon;
    printf("Surface de la sphère : %.2f\n", surface);
    printf("Volume de la sphère : %.2f\n", volume);
}

int main() {
    int choix;
    do {
        printf("\n=== Menu Géométrique ===\n");
        printf("1. Carré\n");
        printf("2. Rectangle\n");
        printf("3. Cercle\n");
        printf("4. Sphère\n");
        printf("5. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                calculCarre();
                break;
            case 2:
                calculRectangle();
                break;
            case 3:
                calculCercle();
                break;
            case 4:
                calculSphere();
                break;
            case 5:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 5);

    return 0;
}