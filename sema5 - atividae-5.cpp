# include <iostream>
# include <cstdlib>
using namespace std;
# define linha cout <<"\n.......................................................\n";  
int main()
{// Variaveis Global.
	int nu_um,nu_do,op;
	int mai,men,res;
	bool sair = true;
	// Dados.
	cout <<" Digite um numero: ";
	cin >> nu_um; 
	//
	cout <<" Digite outro numero: ";
	cin >> nu_do;
	linha
	while(sair)
	{
		// Menu de busca.
		cout <<"\n.....................Menu de opcoes....................\n";
		cout <<"\n 1 - Media entre os numeros digitados.\n";
		cout <<"\n 2 - Diferenca do maior pelo menor.\n";
		cout <<"\n 3 - Produto entre os numeros digitados.\n";
		cout <<"\n 4 - Divisão do primeiro pelo segundo.\n";
		linha
		// Busca.
		cout <<"\n Opcao: ";
		cin >> op;
		// Resposta para busca.
		if(op == 1)
		{
			system("cls");
			// Variaveis.
			float med;
			//
			med = (nu_um + nu_do)/2;
			// Resposta1.
			cout <<"\n........................./Media/........................\n";
			cout <<"\n ..................... Media = "<<med<<" ................... \n\n";
			system("pause");
		}
		else if(op == 2)
		{
			system("cls");
			if(nu_um > nu_do)
			{
			mai = nu_um;
				men = nu_do;
			}
			else if(nu_um < nu_do)
			{
				mai = nu_do;
				men = nu_um;
			}
			res = mai - men;
			// Resposta2.
			cout <<"\n......................./Diferenca/......................\n";
			cout <<"\n .................... "<<mai<<" - "<<men<<" = "<<res<<" .................. \n\n";
			system("pause");
		}
		else if(op == 3)
		{
			system("cls");
			if(nu_um > nu_do)
			{
				mai = nu_um;
				men = nu_do;
			}
			else if(nu_um < nu_do)
			{
				mai = nu_do;
				men = nu_um;
			}
			res = mai - men;
			//
			int produto = (res / 2) + men;
			// Resposta3.
			cout <<"\n......................../Produto/.......................\n";
			cout <<"\n........................... "<<produto<<" ..........................\n\n";
			system("pause");
		}
		else if(op == 4)
		{
			if(op = 0){
				
			}
			system("cls");
			float div = nu_um/nu_do;
			// Resposta4.
			cout <<"\n......................../Divisao/.......................\n";
			cout <<"\n ................. "<<nu_um<<" / "<<nu_do<<" = "<<div<<" ............... \n\n";
			system("pause");
		}
		else if( op > 4 || op < 0){
			cout <<"\n......................../!!ERRO!!/......................\n\n";
			sair = false;
		}
	}
	return 0;	
}
