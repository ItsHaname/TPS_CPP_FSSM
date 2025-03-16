#include<iostream>
#include<string>
using std::string;

int main(){
    string s1;

    if (s1.empty()) {
        std::cout << "Chaine initialisée par les paramètres par défaut" << std::endl;
        s1 = "Module Programmation C Avancee";
    } else {
        std::cout << "Chaine n'est pas vide !!" << std::endl;
    }

    // Nouvelle chaîne
    auto s2="MPCA";
   //modifier la chaine 
    auto posSEN = s1.find("C Avancee");
    s1.insert(posSEN, "POO C++ ");
    auto pos= s1.find("C Avancee");//pour trouver le nouvelle emplcement car il sera ecrase par la chaine ajouter
    auto sub = s1.erase(pos, 10);

    std::cout << "s1 après la nouvelle modification : " << s1 << std::endl;

    return 0;
}
