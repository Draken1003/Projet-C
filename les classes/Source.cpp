#include <iostream>

using namespace std;

class utilisateur {
public:
	string name;
	int age;
	string dateNaissance;
};

int main()
{
	utilisateur a;

	cout << "Entrer votre prenom : ";
	string nom;
	cin >> nom;
	a.name = nom;
	cout << "Entrer votre age : ";
	int age;
	cin >> age;
	a.age = age;
	cout << "Entrer votre date de naissance : ";
	string dateNaissance;
	cin >> dateNaissance;
	a.dateNaissance = dateNaissance;
	cout << "Vous vous appellez " << a.name << ", vous avez " << a.age << " ans et vous etes nee le " << a.dateNaissance << ".";

	return 0;
}
