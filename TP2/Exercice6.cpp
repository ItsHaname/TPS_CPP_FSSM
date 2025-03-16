#include <iostream>
#include <string>

using std::string;

int main() {
    string chaine;

    std::cout << "Saisir une chaine : " << std::endl;
    std::getline(std::cin, chaine);

    // On parcourt chaque caractère de la chaîne
    for (auto j = 0; j < chaine.length(); j++) {
        // Si le caractère n'est pas une lettre (majuscule ou minuscule), un espace, un tiret ou un underscore, on le supprime
        if (!((chaine[j] >= 'a' && chaine[j] <= 'z') || 
              (chaine[j] >= 'A' && chaine[j] <= 'Z') || 
              chaine[j] == ' ' || chaine[j] == '_' || chaine[j] == '-')) {
            chaine.erase(j, 1);  // Supprimer le caractère à la position j
            j--;  // Revenir en arrière pour ne pas sauter le caractère suivant
        }
    }

    std::cout << "Votre chaine apres exclusion des caractères spéciaux : " << chaine << std::endl;

    return 0;
}
