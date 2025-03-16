#include<iostream>
#include<string>

using std::string;

int main (){
    string chaine;
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    std::cout << "Saisir une chaine : " << std::endl;
    std::getline(std::cin, chaine);

    // Traitement de chaque caractère de la chaîne
    for (auto j = 0; j < chaine.length(); j++) {
        if (chaine[j] >= 'a' && chaine[j] <= 'z') {
            // Trouver l'index du caractère dans l'alphabet
            for (int i = 0; i < 26; i++) {
                if (chaine[j] == alphabet[i]) {
                    // Incrémenter la lettre suivante dans l'alphabet
                    // Si c'est 'z', on passe à 'a'
                    chaine[j] = alphabet[(i + 1) ]; // Modulo pour revenir au début de l'alphabet
                    break;
                }
            }
        }
    }

    std::cout << "La chaine saisie après le traitement : " << chaine << std::endl;

    return 0;
}
