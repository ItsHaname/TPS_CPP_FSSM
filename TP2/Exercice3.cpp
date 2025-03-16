#include<iostream>
#include<string>
using std::string;
int main(){
string chaine;
std::cout<<"veuillez saisir une chaine"<<std::endl;
std::getline(std::cin,chaine);
    int taille=0;
for(auto i=0;chaine[i]!='\0';i++){
      taille++;
}
for(auto i=0;i<=taille/2;i++){
    auto c = chaine[i];
    chaine[i] = chaine[taille - i - 1];
    chaine[taille - i - 1] = c;
}
std::cout<<"Votre chaine apres traitement  "<<chaine<<std::endl;



return 0;}