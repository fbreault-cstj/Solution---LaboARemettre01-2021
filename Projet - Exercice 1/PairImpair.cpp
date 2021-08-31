//But:�crire un programme qui lit un entier et qui d�termine et affiche s�il s�agit d�un entier pair d�un entier impair.
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
	int nombre;
	
	cout << "Veuillez entr�e un nombre entier : " << endl;
	cin >> nombre;
	cout << endl;

	if (nombre % 2 == 0 ) //un nombre pair est divisible par 2 et on verifie avec le modulo qu'il reste aucun entier apres la division
	{
		cout << nombre << " est un nombre pair" << endl;

	}
	else
	{
		cout << nombre << " est un nombre impair" << endl;

	}

	/*
	plan de test
	nombre1				r�sultat escompt�
	85					Est un nombre impair
	3650				Est un nombre pair
	-5841				Est un nombre impair
	12548				Est un nombre pair
	*/






}