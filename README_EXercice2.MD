# Exercice 2 : Compter les nombres premiers inférieurs ou égaux à N

## 📌 Objectif
L'objectif de cet exercice est de développer un programme en C++ qui demande à l'utilisateur de saisir un entier N, puis calcule et affiche le nombre de nombres premiers inférieurs ou égaux à N.

Un **nombre premier** est un nombre entier supérieur à 1 qui n'a pas d'autres diviseurs que 1 et lui-même.

## 📜 Explication du programme

### Étapes du programme
1. **Demander à l'utilisateur de saisir un entier N.**
2. **Vérifier chaque nombre entre 2 et N pour déterminer s'il est premier.**
   - Un nombre est premier s'il n'est divisible par aucun autre nombre que 1 et lui-même.
   - La méthode la plus simple est de vérifier pour chaque nombre `i` (entre 2 et N) si ce nombre est divisible par un autre nombre.
