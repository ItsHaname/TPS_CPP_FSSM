// Fichier : DynamicVector.h
#ifndef DYNAMICVECTOR_H
#define DYNAMICVECTOR_H

#include <iostream>
#include <stdexcept> // Pour std::out_of_range

template <typename T>
class DynamicVector {
private:
    T* data;          // Tableau dynamique
    size_t size;      // Nombre d'éléments

public:
    // Constructeur sans paramètre
    DynamicVector() : data(nullptr), size(0) {}

    // Constructeur avec taille initiale
    DynamicVector(size_t n) : size(n) {
        data = new T[size];
    }

    // Destructeur
    ~DynamicVector() {
        delete[] data;
    }

    // Méthode pour obtenir la taille
    size_t getSize() const {
        return size;
    }

    // Surcharge de l'opérateur [] pour accès en lecture/écriture
    T& operator[](size_t index) {
        if (index >= size) {
            throw std::out_of_range("Indice hors limites !");
        }
        return data[index];
    }

    // Surcharge de l'opérateur [] pour accès en lecture seule (const)
    const T& operator[](size_t index) const {
        if (index >= size) {
            throw std::out_of_range("Indice hors limites !");
        }
        return data[index];
    }

    // (Optionnel) Affichage du vecteur
    void print() const {
        for (size_t i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

#endif // DYNAMICVECTOR_H
