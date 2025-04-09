#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

// Fonction pour calculer la surface et le périmètre d'un carré
void calculCarre() {
    double cote;
    printf("Entrez la longueur du cote du carre : ");
    scanf("%lf", &cote);
    
    double surface = cote * cote;
    double perimetre = 4 * cote;
    
    printf("Surface du carre : %.2f\n", surface);
    printf("Perimetre du carre : %.2f\n", perimetre);
}

// Fonction pour calculer la surface et le périmètre d'un rectangle
void calculRectangle() {
    double longueur, largeur;
    printf("Entrez la longueur du rectangle : ");
    scanf("%lf", &longueur);
    printf("Entrez la largeur du rectangle : ");
    scanf("%lf", &largeur);
    
    double surface = longueur * largeur;
    double perimetre = 2 * (longueur + largeur);
    
    printf("Surface du rectangle : %.2f\n", surface);
    printf("Perimetre du rectangle : %.2f\n", perimetre);
}

// Fonction pour calculer la surface et la circonférence d'un cercle
void calculCercle() {
    double rayon;
    printf("Entrez le rayon du cercle : ");
    scanf("%lf", &rayon);
    
    double surface = PI * rayon * rayon;
    double perimetre = 2 * PI * rayon;
    
    printf("Surface du cercle : %.2f\n", surface);
    printf("Circonference du cercle : %.2f\n", perimetre);
}

// Fonction pour calculer la surface et le volume d'une sphère
void calculSphere() {
    double rayon;
    printf("Entrez le rayon de la sphere : ");
    scanf("%lf", &rayon);
    
    double surface = 4 * PI * rayon * rayon;
    double volume = (4.0 / 3.0) * PI * pow(rayon, 3);
    
    printf("Surface de la sphere : %.2f\n", surface);
    printf("Volume de la sphere : %.2f\n", volume);
}

int main() {
    int choix;
    
    printf("Calcul de surfaces et volumes\n");
    printf("1. Carre\n");
    printf("2. Rectangle\n");
    printf("3. Cercle\n");
    printf("4. Sphere\n");
    printf("5. Quitter\n");
    printf("Votre choix : ");
    scanf("%d", &choix);
    
    switch(choix) {
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
            printf("Au revoir!\n");
            return 0;
        default:
            printf("Choix invalide!\n");
    }
    
    return 0;
}
