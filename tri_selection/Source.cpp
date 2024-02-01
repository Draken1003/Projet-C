#include <iostream>

using namespace std;

int main()
{
	int const tailleTableau = 10;
	int tableau[tailleTableau];
	cout << "Entre les valeur de votre liste : " << endl;
	for (int i = 0; i < tailleTableau; i++)
	{
		cin >> tableau[i];
	}

	for (int i = 0; i < tailleTableau; i++)
	{
		for (int j = i + 1; j < tailleTableau; j++)
		{
			if (tableau[j] < tableau[i])
			{
				int valeurTemp = tableau[i];
				tableau[i] = tableau[j];
				tableau[j] = valeurTemp;
			}
		}
		cout << tableau[i];
	}
	return 0;
}