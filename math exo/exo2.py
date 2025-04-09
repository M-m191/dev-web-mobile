import math

def calcul_carre():
    cote = float(input("Entrez la longueur du côté du carré : "))
    surface = cote ** 2
    perimetre = 4 * cote
    print(f"Surface du carré : {surface}")
    print(f"Périmètre du carré : {perimetre}")

def calcul_rectangle():
    longueur = float(input("Entrez la longueur du rectangle : "))
    largeur = float(input("Entrez la largeur du rectangle : "))
    surface = longueur * largeur
    perimetre = 2 * (longueur + largeur)
    print(f"Surface du rectangle : {surface}")
    print(f"Périmètre du rectangle : {perimetre}")

def calcul_cercle():
    rayon = float(input("Entrez le rayon du cercle : "))
    surface = math.pi * rayon ** 2
    perimetre = 2 * math.pi * rayon
    print(f"Surface du cercle : {surface}")
    print(f"Périmètre du cercle : {perimetre}")

def calcul_sphere():
    rayon = float(input("Entrez le rayon de la sphère : "))
    surface = 4 * math.pi * rayon ** 2
    volume = (4/3) * math.pi * rayon ** 3
    print(f"Surface de la sphère : {surface}")
    print(f"Volume de la sphère : {volume}")

def menu():
    while True:
        print("\n=== Calculateur Géométrique ===")
        print("1. Carré")
        print("2. Rectangle")
        print("3. Cercle")
        print("4. Sphère")
        print("5. Quitter")
        choix = input("Choisissez une figure (1-5) : ")

        if choix == '1':
            calcul_carre()
        elif choix == '2':
            calcul_rectangle()
        elif choix == '3':
            calcul_cercle()
        elif choix == '4':
            calcul_sphere()
        elif choix == '5':
            print("Au revoir !")
            break
        else:
            print("Choix invalide, veuillez réessayer.")

# Lancement du programme
menu()