//But:�crire un programme qui prend comme entr�e un nombre de cinq chiffres. Le programme v�rifie qu'il y a bien
//5 chiffres dans le nombre.Puis il affiche le nombre verticalement, le premier chiffre sur la premi�re ligne, le
//deuxi�me chiffre sur la deuxi�me ligne, ainsi de suite.
//Auteur:Francis Breault
//Date:2021-08-31



// liste des biblioth�ques utilis�s
#include<iostream>

// Pour �viter l'usage des std::
using namespace std;

void main() // Utilisation de void pour �viter de retourner une valeur a la fin
{
	setlocale(LC_ALL, "");

	//D�claration des variables
	int nombreEntier;
	

	//Demande � l'utilisateur de saisir un nombre
	cout << "Veuillez saisr un nombre a 5 chiffre : ";
	cin >> nombreEntier;


	if (nombreEntier >= 10000 && nombreEntier <= 99999 || nombreEntier >= -99999 && nombreEntier <= -10000)
	{

		cout << nombreEntier / 10000 << endl;
		cout << nombreEntier / 1000 % 10  << endl;
		cout << nombreEntier / 100 % 10 << endl;
		cout << nombreEntier / 10 % 10 << endl;
		cout << nombreEntier % 10 << endl;
	}
	else
	{
		cout << "Ce nombre ne contient pas 5 chiffres";
	}





}