#include <iostream>	//Inclut la bibliothèque iostream (affichage de texte)
#include <string> //Inclut la bibliothèque string
#include <cmath> //Inclut la bibliothèque math : permet d'utiliser des fonction exemple: sin, cos, racine carré, puissance 
#include <vector> //Inclut la bibliothèque vector
#include <fstream> //Inclut la bibliothèque fstream (file stream) = flux vers les fichiers


using namespace std; //Indique quel espace de noms on va utiliser
/*
double carre(double a)
{
	double res = a * a;
	return res;
}
void dessine_Rectangle(int l, int h , char symb)
{
	for (int ligne = 0; ligne < h; ligne++)
	{
		for (int colonne = 0; colonne < l; colonne++)
		{
			cout << symb ;
		}
		cout << endl;
	}
}
double moyenne(double tableau[], int tailleTableau)
{
	double moyennes = 0;

	for (int i = 0; i < tailleTableau; i++)
	{
		moyennes += tableau[i];
	}
	moyennes /= tailleTableau;

	return moyennes;
}


void fonction(vector <int> const& a)
{
	//...
}
*/

int main()
{
/*
___________________________________________________________________________________________________________________________________
																Jour 1

	cout << "Teste" << endl; //Permet d'afficher un texte
	cout << "\"" << endl;	//Permet d'afficher "
	cout << "\\" << endl;	//Permet d'afficher [\]
___________________________________________________________________________________________________________________________________
																Jour 2

	int pvJoueur = 20;
	double degaJoueur = 10.5;
	bool attaquant = true;
	char type = 'a'; // a = attaquant
	bool aGagner; // variable sans valeur

	string pseudo = "anabela", surnom = "esteves"; //variables du même type,sur une seule ligne, en les séparant par une virgule.
	string& maVariable = pseudo; // maVariable est connecter a pseudo donc si je change, pseudo change aussi (par & = reference)
	maVariable = "Helder"; // je change maVariable ducoup pseudo en même temps
	
	cout << "Pseudo: " << pseudo << " " << "Surnom: " << surnom << endl; // affiche: Pseudo: draken Surnom: drak
___________________________________________________________________________________________________________________________________
																Jour 3

	cout << "Combien vaut pi :" << endl;
	double pi;
	cin >> pi;

	cin.ignore();

	cout << "Comment t'appelle tu :" << endl;
	string  prenom;
	getline(cin, prenom); // permet de stocker tous se que l'utilisateur a écrit ex: "helder esteves" et pas que "helder"
	cout << "Vous vous appelez " << prenom << " est pour vous pi vaut " << pi << endl;

	int a = 13, b = 3, addition = 0, soustraction = 0 , multiplication = 0, division = 0, modulo = 0, racineCarre = 0;
	addition = a + b;
	soustraction = a - b;
	multiplication = a * b;
	division = a / b;
	modulo = a % b; // = au reste de la division
	racineCarre = sqrt(16); // racine carre

	string const motDePasse = "hetitan1003"; // const = valeur ne change jamais
	
	int nombreJoueur = 4;
	++nombreJoueur; // accrémentation = +1
	--nombreJoueur; // décrémentation = -1
	cout << nombreJoueur << endl;

	//raccourcis calcule :
	int nombre = 0;
	nombre += 1;       
	nombre *= 1;        
	nombre -= 1;        
	nombre /= 1;
	int a = 8, b = 2;
	int res = pow(a,b); // pow = calculer des puissances 
	cout << res;
___________________________________________________________________________________________________________________________________
																Jour 4
	
														//[if / else if / else]
	int nbPersonnage = 2;
	if (nbPersonnage == 0)
	{
		cout << "Personne est la !" << endl;
	}
	else if (nbPersonnage == 1)
	{
		cout << "Niquel il y a quelqu'un ! " << endl;
	}
	else
	{
		cout << "Niquel tous le monde est la ! " << endl;
	}
	cout << "Fin du programme" << endl;
	
														//[switch (case / break)]
	int nbAnimaux = 0;
	switch (nbAnimaux)
	{
		case 0: // case = au cas ou c'est ici 0
			cout << "Il n'y a pas d'animaux !" << endl;
			break; // permet de sortir de switch

		case 1:
			cout << "Il y a un animaux !" << endl;
			break;

		case 2:
			cout << "Il y a deux animaux !" << endl;
			break;

		default : // Sinon par default sa renvoi sa :
			cout << "Il y a beaucoup d'animaux !" << endl;
			break;

	}

														//[if pour booleen]
	bool adulte = true;
	if (adulte) // Le if comprend qu'on veut verifier que c'est true donc pas la peine de marquer == true.
	{
		cout << "Vous etes un adulte" << endl;
	}

														//[for]	
	int res = 0;
	for (int a = 0; a < 10; a++)
	{
		res = a + 1;
		cout << res << endl;
	}
														//[while]
	while (res < 20)
	{
		res++;
		cout << res << endl;
	}
														//[do...while]
	int res = 0;
	do
	{
		cout << res << endl; 
		res++;
	} while (res <= 10);
	___________________________________________________________________________________________________________________________________
																Jour 5
														// [fonction]
	
	for (int i = 1; i <= 20; i++)
	{
		cout << "Le carre de " << i << " est " << carre(i) << endl;
	}
	
	int hauteur; 
	cout << "Hauteur du rectangle : ";
	cin >> hauteur; 

	if (hauteur <= 0)
	{
		while (hauteur <= 0)
		{
			cout << "Impossible!! Veuillez choisir un nombre superieur a 0 " << endl;
			cout << "Hauteur du rectangle : ";
			cin >> hauteur;
		}
	}

	int largeur; 
	cout << "Largeur du rectangle : ";
	cin >> largeur;

	if (largeur <= 0)
	{
		while (largeur <= 0)
		{
			cout << "Impossible!! Veuillez choisir un nombre superieur a 0 " << endl;
			cout << "Largeur du rectangle : ";
			cin >> largeur;
		}
	}
	char symbole;
	cout << "Symbole du rectangle : ";
	cin >> symbole;

	dessine_Rectangle(hauteur, largeur , symbole); 
___________________________________________________________________________________________________________________________________
														Jour 6
													//[Tableau statique]
	
	string nomMeilleurJoueur1("helder");
	string nomMeilleurJoueur2("yasuo");
	string nomMeilleurJoueur3("kai sa");
	string nomMeilleurJoueur4("shen");
	string nomMeilleurJoueur5("hary");

	int meilleurScore1(123454);
	int meilleurScore2(112343);
	int meilleurScore3(91211);
	int meilleurScore4(82345);
	int meilleurScore5(67854);

	cout << "1)" << nomMeilleurJoueur1 << " " << meilleurScore1 << endl;
	cout << "2)" << nomMeilleurJoueur2 << " " << meilleurScore2 << endl;
	cout << "3)" << nomMeilleurJoueur3 << " " << meilleurScore3 << endl;
	cout << "4)" << nomMeilleurJoueur4 << " " << meilleurScore4 << endl;
	cout << "5)" << nomMeilleurJoueur5 << " " << meilleurScore5 << endl;
	
	int meilleurScore[5];   //Déclare un tableau de 5 int 
	double anglesTriangles[3];  //Déclare un tableau de 3 double

	
	int const nombreMeilleursScores(5); // Taille tableau
	int meilleursScores[nombreMeilleursScores]; //tableau qui a la longeur de taille tableau 

	meilleursScores[0] = 123454; // remplissage de la premiere case par la valeur
	meilleursScores[1] = 112343; // etc...
	meilleursScores[2] = 91211;
	meilleursScores[3] = 82345;
	meilleursScores[4] = 67854;

	cout << meilleursScores[0] << endl; // affiche la premiere valeur du tableau

	for (int i = 0; i < nombreMeilleursScores; ++i) //boucle qui permet de parcourir toutes les valeurs du tableau en les affichents.
	{
		cout << meilleursScores[i] << endl;
	}

	int const nombreNote(6);
	double notes[nombreNote];
	notes[0] = 12;
	notes[1] = 13;
	notes[2] = 14;
	notes[3] = 15;
	notes[4] = 16;
	notes[5] = 17;

	double moyennes = moyenne(notes, nombreNote);
	cout << moyennes << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "Entrer une valeur pour la case " << i << " : " << endl;
		cin >> notes[i];
	}

	double moyennes = 0;

	for (int i = 0; i < nombreNote; i++)
	{
		moyennes += notes[i];
	}
	moyennes /= nombreNote;
	cout << "Votre moyenne est : " << moyennes << endl;
	___________________________________________________________________________________________________________________________________
														Jour 7
													//[Tableau dinamique]
	

	vector<int> tableau(5, 3); // vector <TYPE> NOM(TAILLE, se qu'il va contenir dans toute les place du tableau ici 3); = [3,3,3,3,3]
	vector <string> listeNom(2, "helder"); //Crée un tableau de 2 strings valant toutes « helder » = ['helder','helder']
	vector <double> tableau3; //Crée un tableau de 0 nombre à virgule

	int const nombreNote(6);
	vector <double> notes(nombreNote);
	notes[0] = 12;
	notes[1] = 13;
	notes[2] = 14;
	notes[3] = 15;
	notes[4] = 16;
	notes[5] = 17;

	for (int i = 0; i < nombreNote; i++)
	{
		cout << notes[i] << endl;
	}
	
	vector <int> chiffre;
	
	cout << "Liste des chiffre :" << endl;
	for (int i = 0; i <= 9; i++)
	{
		chiffre.push_back(i); // .push_back permet de rajouter une case a la fin du tableau avec la valeur entre ().
		cout << chiffre[i] << endl;
	}

	chiffre.pop_back();// .pop_back permet de retirer la derniere case du tableau.

	int const tailleTableau = chiffre.size(); //.size() permet de prendre la taille du tableau pour la stocker dans une autre variable
	cout << "Liste des chiffre moin la derniere case :" << endl;
	for (int i = 0; i < tailleTableau; i++)
	{
		cout << chiffre[i] << endl;
	}

	vector <double> notes;

	for (int i = 0; i < 5; i++)
	{
		double note = 0;
		cin >> note;
		notes.push_back(note);
	}

	double moyenne = 0;

	for (int i = 0; i < notes.size(); i++)
	{
		  moyenne += notes[i];
	}

	moyenne /= notes.size();

	cout << "Votre moyenne est : " << moyenne << endl;
	

													//[Tableau de Tableau]

	// type nomTableau[tailleX][tailleY]
	int const x = 5;
	int const y = 4;
	int tableauDeTableau[x][y]; 

	[1, 2, 3, 4, 5]
	[1, 2, 3, 4, 5]
	[1, 2, 3, 4, 5]		   y
	[1, 2, 3, 4, 5]		   |__x


	vector < vector < int > > grille;
	grille.push_back(vector <int> (5)); //On ajoute une ligne de 5 cases à notre grille
	grille.push_back(vector <int>(3, 4)); //On ajoute une ligne de 3 cases contenant chacune le nombre 4 à notre grille
	grille[0].push_back(8); //Ajoute une case contenant 8 à la première ligne du tableau
	grille[2][3] = 9; //Change la valeur de la cellule (2,3) de la grille
	cout << grille[0][1] << endl;
	
	string nomUtilisateur = "helder";

	cout << "Vous vous appelez " << nomUtilisateur << endl;

	nomUtilisateur[1] = 'i';
	nomUtilisateur[2] = 't';
	nomUtilisateur[3] = 'l';

	cout << "A nom vous vous applez " << nomUtilisateur << " votre nom possède " << nomUtilisateur.size() << " lettre." << endl;

	string nomDeFamille = "esteves";

	string totale = nomDeFamille + " " + nomUtilisateur;

	cout << "Votre nom complet est " << totale << "." << endl;

___________________________________________________________________________________________________________________________________
														Jour 7
										//[Lire des fichier / ecrire dedans]
								
	ofstream monFlux("C:/Users/hetit/OneDrive/Documents/Multi language de code/ C++/ main/ scores.txt");
	//Déclaration d'un flux permettant d'écrire dans le fichier
	//C:/Users/hetit/OneDrive/Documents/Multi language de code/ C++/ main.txt

	//Le plus souvent, le nom du fichier est contenu dans une chaîne de caractères string.
	//Dans ce cas, il faut utiliser la fonction c_str() lors de l'ouverture du fichier :
	

	string const nomFichier("C:/Users/hetit/OneDrive/Documents/Multi language de code/C++/main/scores.txt");
	//ofstream monFlux(nomFichier.c_str()); // = Déclaration d'un flux permettant d'écrire dans un fichier.
	ofstream monFlux(nomFichier.c_str(), ios::app); // app = append Permet de rajouter les information sans supprimer les anciennes.

	if (monFlux) //On teste si tout est OK
	{
		cout << "Salut comment tu t'appelle ? :" << endl; 
		string prenom;
		cin >> prenom; 
		monFlux << "Prenom : " << prenom << endl; // permet d'envoyer dans le fichier la phrase ecrite.

		cout << "Quel age a tu ?" << endl;
		int age;
		cin >> age;
		monFlux << "Age : " << age << endl;

		
		monFlux.close(); // ferme le fichier pour laisser les autres application l'utiliser 
	}
	else
	{
		cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
	}
___________________________________________________________________________________________________________________________________
														Jour 8
										//[Lire des fichier / ecrire dedans] partie 2


	ifstream monFlux("C:/Users/hetit/OneDrive/Documents/Multi language de code/C++/main/scores.txt");
	//Déclaration d'un flux permettant de lire le fichier


	if (monFlux)
	{
		/*
		//1. Lecture d'un fichier ligne par ligne avec  getline()
		string ligne;
		for (int i = 0; i < 4; i++)
		{
			getline(monFlux, ligne); // Lis ligne par ligne
			cout << ligne << endl;
		}
		
		//2. Lecture d'un fichier mot par mot avec les chevrons  >>
		string prenom;
		monFlux >> prenom; //Lit un mot depuis le fichier
		cout << prenom << endl;

		int age;
		monFlux >> age; //Lit un nombre depuis le fichier 
		cout << age << endl;
		
		//3. Lecture d'un fichier caractère par caractère avec  get()
		char a;
		for (int i = 0; i < 48; i++)
		{
			monFlux.get(a);
			cout << a;
		}
		
		//4. Changer de mode de lecture avec .ignore();
		string mot;
		monFlux >> mot; //On lit un mot depuis le fichier

		monFlux.ignore(); //On change de mode

		string ligne;
		getline(monFlux, ligne); //On lit une ligne complète
		
		
		//5. Lire tous un fichier
		string ligne;
		while (getline(monFlux, ligne)) //Tant qu'on n'est pas à la fin, on lit
		{
			cout << ligne << endl;
		}
		
	}
	else
	{
		cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
	}
___________________________________________________________________________________________________________________________________
														   Jour 8
													//[Fichier astuce]
*/
/*
	//1.Fermer un fichier (pas obligatoire)
	ofstream monFlux("C:/Users/hetit/OneDrive/Documents/Multi language de code/C++/main/scores.txt"); // ouvre le fichier 

	monFlux.close(); // ferme le fichier

	//2.On peut retarder l'ouverture d'un fichier après la déclaration du flux

	ofstream monFlux2;  //Un flux sans fichier associé

	monFlux2.open("C:/Users/hetit/OneDrive/Documents/Multi language de code/C++/main/scores.txt"); //On ouvre le fichier

	monFlux2.close(); // ferme le fichier

	//I.Déplacez le curseur dans le fichier.
		//1.Trouvez la position du curseur.
			//pour ifstream = tellg()
			//pour ofstream = tellp()

	ofstream monFlux3("C:/Users/hetit/OneDrive/Documents/Multi language de code/C++/main/scores.txt");
	int position = monFlux3.tellp();
	cout << "Nous nous situons au " << position << " eme caractere du fichier." << endl;

		//2.Déplacez-vous dans un fichier.
			//pour ifstream = seekg()
			//pour ofstream = seekp()
	//flux.seekp(nombreCaracteres, position);
		 _______________________________
		|Position:						|
		|Le début du fichier: ios::beg. |
		|La fin du fichier: ios::end.	|
		|La position actuelle: ios::cur.|
		 -------------------------------
	ofstream monFlux3("C:/Users/hetit/OneDrive/Documents/Multi language de code/C++/main/scores.txt");
	monFlux3.seekp(3, ios::end);

		//3.Trouvez la taille d'un fichier.

	ifstream fichier("C:/Users/hetit/OneDrive/Documents/Multi language de code/C++/main/scores.txt");
	
	fichier.seekg(0, ios::end);
	
	int taille = fichier.tellg();

	cout << "La taille du fichier est de : " << taille << " octets." << endl;
___________________________________________________________________________________________________________________________________
														   Jour 9
													//[Déclarez les pointeurs]
	*/
	int a = 10;
	cout << &a;


	return 0;
}

