TP 5 : Classe et Objet en C++

Exercice 1 : Manipulation d'un point dans un plan 2D

Objectif

Réaliser une classe Point permettant de manipuler un point dans un plan 2D avec plusieurs opérations de transformation et d'affichage.

Spécifications

1. Définition de la classe Point

La classe doit contenir :

Attributs :

Les coordonnées x et y du point en tant que membres privés.

Méthodes :

deplace(float dx, float dy): effectue une translation définie par les valeurs dx et dy.

affiche(): affiche les coordonnées cartésiennes du point.

2. Encapsulation

Les coordonnées du point doivent être privées.

Il faut implémenter des accesseurs et mutateurs pour manipuler ces valeurs en respectant l'encapsulation.

3. Méthodes supplémentaires

homothetie(double facteur): multiplie les coordonnées par un facteur fourni en argument.

rotation(double angle): effectue une rotation du point selon l'angle donné.

rho(): retourne la distance du point à l'origine (coordonnée polaire r).

theta(): retourne l'angle en radians (coordonnée polaire θ).

affichePol(): affiche les coordonnées polaires du point.

4. Fichiers requis

Fichier d'en-tête : contient la déclaration de la classe Point.

Fichier source : contient l'implémentation des méthodes de la classe.

Programme principal :

Déclare trois points.

Affiche leurs coordonnées.

Effectue des transformations et affiche les résultats.

