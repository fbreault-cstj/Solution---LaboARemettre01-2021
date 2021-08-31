//But:Écrire un programme qui prend comme entrée un nombre de cinq chiffres. Le programme vérifie qu'il y a bien
//5 chiffres dans le nombre.Puis il affiche le nombre verticalement, le premier chiffre sur la première ligne, le
//deuxième chiffre sur la deuxième ligne, ainsi de suite.
//Auteur:Francis Breault
//Date:2021-08-31



// liste des bibliothèques utilisés
#include<iostream>

// Pour éviter l'usage des std::
using namespace std;

void main() // Utilisation de void pour éviter de retourner une valeur a la fin
{
	setlocale(LC_ALL, "");

	//Déclaration des variables
	int nombreEntier;
	

	//Demande à l'utilisateur de saisir un nombre
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