#include <iostream>
using namespace std;
//
struct celula
{
	string nome;
	int idade;
	celula *nex;
};
// Recebe uma idade e devolve int
int recebeIdade()
{
	int idade;
	//
	cout <<" Idade: ";
	cin >> idade;
	//
	return idade;
}
// Recebe um nome e devolve uma string
string recebeNome()
{
	string nome;
	//
	cout <<"\n Nome: ";
	cin >> nome;
	//
	return nome;
}
// Função que acresenta mais uma celula(pessoa) a lista no incio
celula *inserirNoInicio(celula *lista, int idade, string nome)
{
	celula *nova = new celula;
	nova->nome = nome;
	nova->idade = idade;
	nova->nex = lista;
	lista = nova;
	return lista;
}
// Função que acresenta mais uma celula(pesssoa) a lista no fim
celula *inserirNoFim(celula *lista, int idade, string nome)
{
	celula *nova = new celula;
	nova->nome = nome;
	nova->idade = idade;
	nova->nex = NULL;
	//
	if(lista != NULL)
	{
		celula *aux = lista;//primeiro dos ponteiros(inicio da lista)
		//
		while(aux->nex != NULL)
		{
			aux = aux->nex;
		}
		aux->nex = nova;
		return lista;
	}else
	{
		cout <<" Sua lista estava vazia e foi adicionado novos dados! \n";
		return nova;
	}
}
// Mostra na tela nomes cadastrados nos endereÇos de memoria
void imprimirLista(celula *lista)
{
	if(lista != NULL)
	{
		cout <<"\n..........................................\n";
		celula *aux = lista;
		while(aux != NULL)
		{
			cout<<" "<< aux->nome << endl;
			aux = aux -> nex;
		}
		cout <<"\n..........................................\n";
	}else
	{
		cout <<" Sua lista estava vazia \n";
	}
}
//
int main()
{
	celula *lista = NULL;
	//
	imprimirLista(lista);
	//
	lista = inserirNoFim(lista, recebeIdade(), recebeNome());
	//
	imprimirLista(lista);
}
#include <iostream>
using namespace std;
//
struct celula
{
	string nome;
	int idade;
	celula *nex;
};
// Recebe uma idade e devolve int
int recebeIdade()
{
	int idade;
	//
	cout <<" Idade: ";
	cin >> idade;
	//
	return idade;
}
// Recebe um nome e devolve uma string
string recebeNome()
{
	string nome;
	//
	cout <<"\n Nome: ";
	cin >> nome;
	//
	return nome;
}
// Função que acresenta mais uma celula(pessoa) a lista no incio
celula *inserirNoInicio(celula *lista, int idade, string nome)
{
	celula *nova = new celula;
	nova->nome = nome;
	nova->idade = idade;
	nova->nex = lista;
	lista = nova;
	return lista;
}
// Função que acresenta mais uma celula(pesssoa) a lista no fim
celula *inserirNoFim(celula *lista, int idade, string nome)
{
	celula *nova = new celula;
	nova->nome = nome;
	nova->idade = idade;
	nova->nex = NULL;
	//
	if(lista != NULL)
	{
		celula *aux = lista;//primeiro dos ponteiros(inicio da lista)
		//
		while(aux->nex != NULL)
		{
			aux = aux->nex;
		}
		aux->nex = nova;
		return lista;
	}else
	{
		cout <<"\n Sua lista estava vazia e foi adicionado novos dados!! \n";
		return nova;
	}
}
// Mostra na tela nomes cadastrados nos endereÇos de memoria
void imprimirLista(celula *lista)
{
	if(lista != NULL)
	{
		cout <<"\n..........................................\n\n";
		celula *aux = lista;
		while(aux != NULL)
		{
			cout<<" "<< aux->nome << endl;
			aux = aux -> nex;
		}
		cout <<"\n..........................................\n";
	}else
	{
		cout <<"\n Sua lista estava vazia!! \n";
	}
}
//
int main()
{
	celula *lista = NULL;
	//
	imprimirLista(lista);
	//
	lista = inserirNoFim(lista, recebeIdade(), recebeNome());
	//
	imprimirLista(lista);
}