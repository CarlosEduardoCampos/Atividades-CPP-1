//Crie um programa para controle de filas de pessoas para os Correios.
//Seu programa dever� ter duas filas, uma para PAC e outra para Sedex.

//Quando chegar na fila, a pessoa dever� fornecer:
//O tipo de servi�o desejado (1 - PAC ou 2 - Sedex);
//Seu nome;
//Seu endere�o (CEP, Rua, N�mero, Cidade);
//Nome do Destinat�rio;
//Endere�o do destinat�rio (CEP, Rua, N�mero, Cidade);
//OBS: A pessoa deve ser inserida na fila correspondente ao servi�o desejado.

//O programa deve exibir op��o para:
//Adicionar pessoas na fila;
//Chamar pr�ximo da fila, informando a fila correspondente;
//Mostrar as filas;
//Sair
#include <iostream>
#include <queue>
#include <locale>
using namespace std;

struct endereco{
	string cep;
	string numero;
	string rua;
	string cidade;
};

struct pessoa{
	string nome;
	endereco localiza;
};

struct Cliente{
	pessoa cliente;
	pessoa destinatario;
};

/**
 * PARAMETROS
 * 0 = Cliente
 * 1 = Destinat�rio
 */
void setTipo(string dado,int tipo=0){
	if(tipo == 0)
	{
		cout << " Cliente "<<dado<<": ";
	}
	else{
		cout << " Destinat�rio "<<dado<<": ";
	}
}

/**
 * Retorna uma string para nome
 * PARAMETROS
 * tipo = 0 -> Cliente
 * tipo = 1 -> Destinat�rio
 */
string setNome(int tipo = 0){
	string nome;
	//
	setTipo("nome",tipo);
	cin >> nome;
	//
	return nome;
}

/**
 * Retorna uma string para CEP
 * PARAMETROS
 * tipo = 0 -> Cliente
 * tipo = 1 -> Destinat�rio
 */
string setCep(int tipo = 0){
	string cep;
	//
	setTipo("CEP da cidade",tipo);
	cin >> cep;
	//
	return cep;
}

/**
 * Retorna uma String para numero
 * PARAMETROS
 * tipo = 0 -> Cliente
 * tipo = 1 -> Destinat�rio
 */
string setNumero(int tipo = 0){
	string num;
	//
	setTipo("numero da casa",tipo);
	cin >> num;
	//
	return num;
}

/**
 * Retorna uma string para nome da rua
 * PARAMETROS
 * int tipo = 0 -> Cliente
 * int tipo = 1 -> Destinat�rio
 */
string setRua(int tipo = 0){
	string nome;
	//
	setTipo("nome da rua",tipo);
	cin >> nome;
	//
	return nome;
}

/**
 * Retorna uma string para nome da cidade
 * PARAMETROS
 * int tipo = 0 -> Cliente
 * int tipo = 1 -> Destinat�rio
 */
string setCidade(int tipo = 0){
	string nome;
	//
	setTipo("nome da cidade",tipo);
	cin >> nome;
	//
	return nome;
}

/**
 * Cadastra todos os dados da struct pessoa
 * PARAMETROS
 * strunc pessoa{
 *	string nome;
 * 	endereco localiza;
 * };
 * strunc endereco{
 * 	string cep;
 *	string numero;
 *	string rua;
 *	string cidade;
 * };
 * int tipo = 0 -> Cliente
 * int tipo = 1 -> Destinat�rio
 * 
 * retorna uma pessoa
 */
pessoa cadastraPessoa(pessoa Pessoa, int tipo=0)
{
	Pessoa.nome = setNome(tipo);
	Pessoa.localiza.cep = setCep(tipo);
	Pessoa.localiza.numero = setNumero(tipo);
	Pessoa.localiza.rua = setRua(tipo);
	Pessoa.localiza.cidade = setCidade(tipo);
	
	return Pessoa;
}

/**
 * Cadastra um cliente que guarda iforma��es 
 * de duas pessoa (cliente e destinat�rio)
 * 
 * retorna um Cliente
 */
Cliente cadastraCliente(){
	Cliente Usuario;
	pessoa Pessoa;
	
	Usuario.cliente=cadastraPessoa(Pessoa);
	Usuario.destinatario=cadastraPessoa(Pessoa,1);
	
	return Usuario;
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	//
	queue<Cliente> filaClientes;
	//
	filaClientes.push(cadastraCliente());
	//
	if(filaClientes.empty())
	{
		cout << "\nVazia\n" ;
	}else{
		cout << "\nN�o vazia\n";
	}
	//
	return 0;
}


