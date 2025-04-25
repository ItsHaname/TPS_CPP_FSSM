#include <iostream>
#include <list>

int main() {
    std::list<int> liste;
    int choix;

    while (true) {
        std::cout << "========================================================" << std::endl;
        std::cout << "                      Menu                              " << std::endl;
        std::cout << "========================================================" << std::endl;
        std::cout << "1. Taper 1 pour ajouter un entier dans la liste" << std::endl;
        std::cout << "2. Taper 2 pour afficher la liste des entiers" << std::endl;
        std::cout << "3. Taper 3 pour supprimer le dernier entier de la liste" << std::endl;
        std::cout << "4. Taper 4 pour afficher le dernier entier saisi dans la liste" << std::endl;
        std::cout << "5. Taper 5 pour Quitter" << std::endl;
        std::cout << "========================================================" << std::endl;

        std::cout << "Veuillez saisir votre choix : ";
        std::cin >> choix;

        switch (choix) {
            case 1: {
                int pos, N;
                do {
                    std::cout << "Dans quelle position voulez-vous ajouter l'entier ? (debut=1, fin=2) : ";
                    std::cin >> pos;
                    std::cout << "Donne moi la valeur d'entier à ajouter : ";
                    std::cin >> N;
                    if (pos == 1) {
                        liste.push_front(N);
                    } else if (pos == 2) {
                        liste.push_back(N);
                    } else {
                        std::cout << "Erreur! Saisez 1 ou 2" << std::endl;
                    }
                } while (pos != 1 && pos != 2);  // La boucle doit continuer jusqu'à ce que l'utilisateur entre 1 ou 2
                break;
            }
            case 2: {
                std::cout << "********* Votre liste ************" << std::endl;
                for (int i : liste) {
                    std::cout << i << " ";
                }
                std::cout << std::endl;  // Ajout d'un saut de ligne après l'affichage de la liste
                break;
            }
            case 3: {
                if (!liste.empty()) {
                    liste.pop_back();
                    std::cout << "Le dernier élément a été supprimé de votre liste." << std::endl;
                } else {
                    std::cout << "La liste est vide, impossible de supprimer un élément." << std::endl;
                }
                break;
            }
            case 4: {
                if (!liste.empty()) {
                    std::cout << "Le dernier élément ajouté est : " << liste.back() << std::endl;
                } else {
                    std::cout << "La liste est vide, aucun élément à afficher." << std::endl;
                }
                break;
            }
            case 5:
                std::cout << "Vous avez quitté le programme." << std::endl;
                return 0;

            default:
                std::cout << "Erreur ! Choix invalide." << std::endl;
        }
    }

    return 0;
}
