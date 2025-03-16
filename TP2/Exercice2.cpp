#include<iostream>
#include<string>
using std:: string ;
int main(){
    int compteur=0;
    int espace=0;
    string chaine;
    std::cout<<"Saisir une chaine"<<std::endl;
    std::getline(std::cin,chaine);
    for(auto i=0;chaine[i]!='\0';i++){
        if(chaine[i] == 'A' || chaine[i] == 'a' ||
            chaine[i] == 'E' || chaine[i] == 'e' ||
            chaine[i] == 'I' || chaine[i] == 'i' ||
            chaine[i] == 'O' || chaine[i] == 'o' ||
            chaine[i] == 'U' || chaine[i] == 'u'){
            compteur++;
        }
    }
    std::cout<<"le nombre de voyelles dans la chaine saisie est"<<compteur<<std::endl;
    if(!chaine.empty()){
    for(auto i=0;chaine[i]!='\0';i++){
        if(chaine[i]==' '){
              espace++;
        }
    }
}
    std::cout<<"le nombre de mot dans la chaine est:"<<espace<<std::endl;


    return 0;
}