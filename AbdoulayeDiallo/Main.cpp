//Auteur:Diallo Abdoulaye

#include "Header.h"
#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
            //Constantes
            const int max= 3;
            const int min=1;
            //Variables
            int note;
            int jours;
            int mois;
            int annee;
            int hauteur;
            int largeur;

                     /*-------Exercice 1----------*/
        for (int compteur = min; compteur <= max; compteur++)
        {
            std::cout << "Entrez vos notes pour calculer votre moyenne" << std::endl;
            cin >> note;
        }
        
        std::cout << "Votre moyenne est de : " << calculerMoyenne(note) << std::endl;



    /*-------Exercice 2----------*/



    /*-------Exercice 3----------*/
    return 0;
}


