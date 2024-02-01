#include <iostream>
#include <vector>
#include <iomanip> // Pour la mise en forme


using namespace std;

bool aGagne(char joueur, char morpion[][3]) {
    // Vérification des lignes
    for (int i = 0; i < 3; ++i) {
        if (morpion[i][0] == joueur && morpion[i][1] == joueur && morpion[i][2] == joueur) {
            return true;
        }
    }

    // Vérification des colonnes
    for (int j = 0; j < 3; ++j) {
        if (morpion[0][j] == joueur && morpion[1][j] == joueur && morpion[2][j] == joueur) {
            return true;
        }
    }

    // Vérification de la première diagonale
    if (morpion[0][0] == joueur && morpion[1][1] == joueur && morpion[2][2] == joueur) {
        return true;
    }

    // Vérification de la deuxième diagonale
    if (morpion[0][2] == joueur && morpion[1][1] == joueur && morpion[2][0] == joueur) {
        return true;
    }

    return false;
}
 
int main() 
{ 
    const int lignes = 3; 
    const int colonnes = 3; 
     
    char morpion[lignes][colonnes] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };  
       
    bool jeuTerminer = false; 
    int toursJouer = 0;
     
    while (!jeuTerminer) 
    { 
        // Afficher les numéros de colonne 
        std::cout << "    "; 
        for (int j = 0; j < colonnes; ++j) { 
            std::cout << std::setw(6) << j; 
        } 
        std::cout << "\n\n"; 
         
        for (int i = 0; i < lignes; ++i) { 
            // Afficher le numéro de ligne 
            std::cout << std::setw(3) << i; 
             
            for (int j = 0; j < colonnes; ++j) { 
                std::cout << std::setw(6) << morpion[i][j]; 
            } 
             
            std::cout << "\n"; 
        } 
         
        int joueur1Ligne; 
        cout << "J1 : Entrer la position de la ligne :"; 
        cin >> joueur1Ligne; 
         
        int joueur1Colonne; 
        cout << "J1 :Entrer la position de la colonne :"; 
        cin >> joueur1Colonne; 
         
        if (morpion[joueur1Ligne][joueur1Colonne] == ' ') 
        { 
            morpion[joueur1Ligne][joueur1Colonne] = 'x'; 
            toursJouer++; 
        } 
        else 
         {
            bool reponse = false;
            do
            {
                    cout << "       ! Cette case est deja occupee.Veuillez choisir une autre case !         " << endl;
                    int joueur1Ligne;
                    cout << "J1 : Entrer la position de la ligne :";
                    cin >> joueur1Ligne;

                    int joueur1Colonne;
                    cout << "J1 :Entrer la position de la colonne :";
                    cin >> joueur1Colonne;
                
                if (morpion[joueur1Ligne][joueur1Colonne] == ' ')
                {
                    morpion[joueur1Ligne][joueur1Colonne] = 'x';
                    toursJouer++;
                    reponse = true;
                }
            } while (reponse != true);
        }

        if (aGagne('x', morpion)) 
        {
            // Afficher les numéros de colonne
            std::cout << "    ";
            for (int j = 0; j < colonnes; ++j)
            {
                std::cout << std::setw(6) << j;
            }
            std::cout << "\n\n";

            for (int i = 0; i < lignes; ++i)
            {
                // Afficher le numéro de ligne
                std::cout << std::setw(3) << i;

                for (int j = 0; j < colonnes; ++j)
                {
                    std::cout << std::setw(6) << morpion[i][j];
                }
                std::cout << "\n";
            }
            cout << "Joueur 1 a gagne !" << endl;
            jeuTerminer = true;
        }

        // Afficher les numéros de colonne
        std::cout << "    ";
        for (int j = 0; j < colonnes; ++j) 
        {
            std::cout << std::setw(6) << j;
        }
        std::cout << "\n\n";
         
        for (int i = 0; i < lignes; ++i) 
        {
            // Afficher le numéro de ligne
            std::cout << std::setw(3) << i;
        
             
            for (int j = 0; j < colonnes; ++j) 
            {
                    std::cout << std::setw(6) << morpion[i][j];
            }
             
            std::cout << "\n";
        }
         
        int joueur2Ligne;
        cout << "J2 :Entrer la position de la ligne :";
        cin >> joueur2Ligne;
         
        int joueur2Colonne;
        cout << "J2 :Entrer la position de la colonne :";
        cin >> joueur2Colonne;
         
        if (morpion[joueur2Ligne][joueur2Colonne] == ' ')
        {
            morpion[joueur2Ligne][joueur2Colonne] = 'o';
            toursJouer++;
        }
        else
        {
            bool reponse = false;
            do
            {
                cout << "       ! Cette case est deja occupee.Veuillez choisir une autre case !         " << endl;
                int joueur2Ligne;
                cout << "J2 : Entrer la position de la ligne :";
                cin >> joueur2Ligne;

                int joueur2Colonne;
                cout << "J2 :Entrer la position de la colonne :";
                cin >> joueur2Colonne;

                if (morpion[joueur2Ligne][joueur2Colonne] == ' ')
                {
                    morpion[joueur2Ligne][joueur2Colonne] = 'o';
                    toursJouer++;
                    reponse = true;
                }
            } while (reponse != true);
        }
        if (aGagne('o', morpion)) 
        {
            // Afficher les numéros de colonne
            std::cout << "    ";
            for (int j = 0; j < colonnes; ++j)
            {
                std::cout << std::setw(6) << j;
            }
            std::cout << "\n\n";

            for (int i = 0; i < lignes; ++i)
            {
                // Afficher le numéro de ligne
                std::cout << std::setw(3) << i;

                for (int j = 0; j < colonnes; ++j)
                {
                    std::cout << std::setw(6) << morpion[i][j];
                }
                std::cout << "\n";
            }
            cout << "Joueur 2 a gagne !" << endl;
            jeuTerminer = true;
        }
        // Vérifier si le jeu est terminé
        if (toursJouer == lignes * colonnes) 
        {
            jeuTerminer = true;
            cout << "\n";
            cout << "Le jeu est terminé. Le tableau est rempli !\n";
        }
    }
    return 0; 
} 