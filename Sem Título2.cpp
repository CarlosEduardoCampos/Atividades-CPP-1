# include <iostream>
using namespace std;
#define linha cout << "..........................................\n";
int main()
{
	string nome, part = ""; // variaveis nome do eleitor e partirdo
	int voto = 0; // variavel recebe numero do candidato
	
	// Cadastro 
	cout << " Nome: ";
	cin >> nome;
	linha
	cout << " Partido: ";
	cin >> part;
	linha
	linha
	cout << " 1 ate 5 - Votos validos para candidatos.\n";
	cout << "\n";
	cout << " 6 - Voto valido como indeciso.\n";
	cout << "\n";
	cout << " 7 - Voto valido como nulo ou branco.\n";
	linha
	linha 
	cout << " Candidato: ";
	cin >> voto;
	linha
	
}
