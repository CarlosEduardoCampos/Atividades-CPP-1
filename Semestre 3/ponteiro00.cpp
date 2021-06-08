#include <iostream>
using namespace std;
//
struct celula
{
	string nome;
	string sobNome;
	int idade;
	celula *nex;
};
// Recebe um nome e devolve uma string
string recebeNome()
{
	string nome;
	//
	cout <<" Nome: ";
	cin >> nome;
	//
	return nome;
}
// FunÁ„o que acresenta mais uma celula a lista
celula *inserir(celula *lista, string nome)
{
	celula *nova = new celula;
	nova->nome = nome;
	nova->nex = lista;
	lista = nova;
	return lista;
}
// Mostra na tela nomes cadastrados nos endere«os de memoria
void imprimirLista(celula *lista)
{
	if(lista != NULL)
	{
		celula *aux = lista;
		while(aux != NULL)
		{
			cout<<" "<< aux -> nome << endl;
			aux = aux -> nex;
		}
	}else
	{
		cout <<" Sua lista esta vazia \n";
	}
}
//
int main()
{
	celula *lista = NULL;
	//
	lista = inserir(lista,recebeNome());
	lista = inserir(lista,recebeNome());
	lista = inserir(lista, recebeNome());
	//
	imprimirLista(lista);
}