#include "class.hpp"

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Create an object Aleat with 10 values, where each value is between 0 and 5
    Aleat aleat(10, 5);

    // Display the randomly generated sequence
    cout << "Affichage des valeurs dans la suite:" << endl;
    aleat.afficher();

    // Get a specific value (e.g., the value at index 3)
    int valeur = aleat.getValeur(3);
    cout << "\nLa valeur à l'indice 3 est: " << valeur << endl;

    // Get all values from the sequence
    int* valeurs = aleat.getValeurs();
    cout << "\nLes valeurs de la suite (via getValeurs):" << endl;
    for (int i = 0; i < 10; i++) {
        cout << valeurs[i] << " ";
    }
    cout << endl;
    delete[] valeurs; // Don't forget to delete the dynamically allocated array!

    // Get the histogram
    int* histogramme = aleat.histo();
    cout << "\nL'histogramme des valeurs de la suite est:" << endl;
    for (int i = 0; i <= 5; i++) {
        cout << "Valeur " << i << " : " << histogramme[i] << " fois" << endl;
    }
    delete[] histogramme; // Clean up the histogram array

    // Create a copy of the Aleat object using the copy constructor
    Aleat aleat_copy = aleat;
    cout << "\nAffichage des valeurs dans la suite de l'objet copié:" << endl;
    aleat_copy.afficher();

    return 0;
}
