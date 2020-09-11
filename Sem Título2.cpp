# include <iostream>
using namespace std;
#define linha cout << "..........................................\n";
int main()
{
	string nome, part = ""; // variaveis nome do eleitor e partirdo
	int voto = 0; // variavel recebe numero do candidato
	
	cout << " Nome: ";
	cin >> nome;
	linha
	cout << " Partido: ";
	cin >> part;
	linha
	cout << "Candidato:{voto valido 1 ao 5} ";
	cin >> voto;
}
