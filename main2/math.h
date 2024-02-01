#ifndef HEADER_HPP_INCLUDED 
#define HEADER_HPP_INCLUDED 

/*
	*Fonction qui ajoute 2 au nombre recu en argument
	* - nombreRecu : Le nombre auquel la fonction ajoute 2 
	*Valeur retourner: nombreRecu + 2
*/
int ajouteDeux(int nombreRecu);

/*
	*Fonction qui multiplie le nombre recu en argument par lui meme
	* - nombreRecu : Le nombre auquel la fonction le multiplie par lui meme 
	*Valeur retourner: nombreRecu * nombreRecu
*/
int carre(int nombreRecu);

/*
	*Fonction qui convertie les nombres recus en argument en seconde
	* - heure, minute , seconde : Les nombres auquel la fonction les converties en seconde et les additionnes
	*Valeur retourner: la somme des nombre converti en seconde
*/
int nombreDeSeconde(int heure, int minute = 0 , int seconde = 0);

/*
	*Fonction qui calcule la moyenne des valeurs du tableau
	* - tableau : Les nombres auquel la fonction fait une addition de tous
	*Valeur retourner: la moyenne des note dans le tableau
*/
double moyenne(double tableau[], int tailleTableau);


#endif // MATH_HPP_INCLUDED 