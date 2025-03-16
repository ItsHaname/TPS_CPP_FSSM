#include<iostream>
#include<string>
#include<cctype>
using std::string;

int main(){
    string chaine;
    std::cout<<"Saisir une chaine"<<std::endl;
    std::getline(std::cin,chaine);
    
    for(auto i=0;chaine[i]!='\0';i++){
        if(std::isupper(chaine[i])){
            chaine[i]=std::tolower(chaine[i]);
        }else if(std::islower(chaine[i])){
            chaine[i]=std::toupper(chaine[i]);
        }
    }


std::cout<<"Votre chaine apres traitement "<<chaine<<std::endl;
return 0;
}