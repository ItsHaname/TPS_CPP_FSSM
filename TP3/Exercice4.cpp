#include<iostream>

namespace global {
    namespace entiers {
        int add(int a, int b) {
            return a + b;
        }

        int sub(int a, int b) {
            return a - b;
        }
    }

    namespace reel {
        float add(float a, float b) {
            return a + b;
        }

        float sub(float a, float b) {
            return a - b;
        }
    }
}

int main() {
    int choix;
    int x, y;
    float a, b;
   
    while(1) {
        std::cout << "-------------------------------------------------------------" << std::endl;
        std::cout << "/                        MENU                               /" << std::endl;
        std::cout << "----------------------------------------------------------------" << std::endl;
        std::cout << "1) Appel de la fonction add de namespace entier pour les deux entiers" << std::endl;
        std::cout << "2) Appel de la fonction sub de namespace entier pour les deux entiers" << std::endl;
        std::cout << "3) Appel de la fonction add de namespace reel pour les deux réels" << std::endl;
        std::cout << "4) Appel de la fonction sub de namespace reel pour les deux réels" << std::endl;
        std::cout << "Votre choix ? ";
        std::cin >> choix;

        switch (choix) {
            case 1:
                std::cout << "Veuillez saisir le premier entier: ";
                std::cin >> x;
                std::cout << "Veuillez saisir le deuxième entier: ";
                std::cin >> y;
                std::cout << "La somme des deux entiers : " << global::entiers::add(x, y) << std::endl;
                break;  // Ajout du break pour sortir de cette case

            case 2:
                std::cout << "Veuillez saisir le premier entier: ";
                std::cin >> x;
                std::cout << "Veuillez saisir le deuxième entier: ";
                std::cin >> y;
                std::cout << "La soustraction des deux entiers : " << global::entiers::sub(x, y) << std::endl;
                break;  // Ajout du break pour sortir de cette case

            case 3:
                std::cout << "Veuillez saisir le premier réel: ";
                std::cin >> a;
                std::cout << "Veuillez saisir le deuxième réel: ";
                std::cin >> b;
                std::cout << "La somme des deux réels : " << global::reel::add(a, b) << std::endl;
                break;  // Ajout du break pour sortir de cette case

            case 4:
                std::cout << "Veuillez saisir le premier réel: ";
                std::cin >> a;
                std::cout << "Veuillez saisir le deuxième réel: ";
                std::cin >> b;
                std::cout << "La soustraction des deux réels : " << global::reel::sub(a, b) << std::endl;
                break;  // Ajout du break pour sortir de cette case

            default:
                std::cout << "Erreur !!!!!" << std::endl;
                return 7;  // Sortir avec une erreur
                
        }
    }

    return 0;
}
