// TestPrixObjet.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;

int main()
{
    //Outils
    string venteachat = "+"; // + vente, - achat.
    int venteachatnombre; // Ex: -1 Vous acheterez une pomme, +2 vous vendrez deux pommes.

    //Pomme
    double PommePrixOriginal = 1;
    double PommePrixActuel = PommePrixOriginal;
    int PommeVente = 10;
    int PommeDemande = 0;

    cout << "Hello World!" << endl;

    //Console 
    while (true)
    {
        cin >> venteachat >> venteachatnombre;
        
        //Partie chiante
        if (venteachat == "+")
        { 
            if (venteachatnombre <= PommeDemande) { PommeDemande = PommeDemande - venteachatnombre; }
            else PommeVente = PommeVente + venteachatnombre; 

            if (PommeVente < PommeDemande) { PommePrixActuel = (PommePrixActuel + PommePrixOriginal) * PommeDemande / 10; }
            if (PommeDemande < PommeVente) { PommePrixActuel = PommePrixActuel / (PommeVente / PommePrixOriginal); }

            cout << "(Prix: " << PommePrixActuel << "$, Stock: " << PommeVente << ", Demande: " << PommeDemande << ")" << endl;
        }
        if (venteachat == "-") 
        {
            if (venteachatnombre <= PommeVente) { PommeVente = PommeVente - venteachatnombre; }
            else PommeDemande = PommeDemande + venteachatnombre;

            if (PommeVente < PommeDemande) { PommePrixActuel = (PommePrixActuel + PommePrixOriginal) * PommeDemande / 10; }
            if (PommeDemande < PommeVente) { PommePrixActuel = PommePrixActuel / (PommeVente / PommePrixOriginal); }

            cout << "(Prix: " << PommePrixActuel << "$, Stock: " << PommeVente << ", Demande: " << PommeDemande << ")" << endl;
        }
    }
}

