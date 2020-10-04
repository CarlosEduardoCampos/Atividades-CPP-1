# include <iostream>
# include <math.h>
# include <locale>
using namespace std;
//
int main()
{
	setlocale(LC_ALL,"portuguese");
	//
	int op = 0;
	cout <<"\n.................... Menu ....................\n";
	cout <<"\n 1 - numero binario para de cimal \n";
	cout <<"\n 2 - numero decimal para binario \n";
	cout <<"\n..............................................\n";
	//
	do
	{
		cout <<" Opção: [1 ou 2] ";
		cin >> op;
	}
	while(op < 0 || op > 3);
	//numero decimal para binario
	if(op == 2)
	{
		int dec, y, bin[8];// decimal, contador, binario.
		//
		cout <<"\n Decimal : ";//Pedindo decimal.
		cin >>dec;// Recebendo decimal
		//
		for(y == 0; y <=7; y++)// lupe para divisão do decimal.
		{
			if(dec >= 1)
			{
				bin[y] = (dec%2);// binario recebe resto  0 ou 1.
				dec /= 2;
			}
			else
			{
				bin[y] = 0;// quando não e possivel mais dividir binario recebe 0.
			}
		}
		cout <<"\n BINARIO : ";
		for(y = 7; y >= 0; y --)// Invertendo a lista para chegarao resultado.
		{
			cout<< bin[y];
		}
		cout <<"\n";
	}
	//
	else if(op == 1)
	{
		//
		int n=0;
		//
		cout <<"Numero de casas:[binario] ";
		cin >>n; 
		//
		int bin[200], dec;
		//
		for(int i=0; i <=(n-1); i++)
		{
			cout <<" Binnario "<<i<<": ";
			cin >>bin[i];	
		}
		//
		for(int i=(n-1); i>=0; i--)
		{
			if(bin[i] != 0)
			{
				dec += pow((bin[i]*2),i);
			}
		}
		cout <<" Decimal: "<<dec<<"\n";
	}
	//
	system("pause");
	//
	return 0;
}
