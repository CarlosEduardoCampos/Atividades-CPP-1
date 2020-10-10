# include <iostream>
# include <cstring>
# include <math.h>
using namespace std;
//
int main(){
//
		char bin[20];//binario.
		int dec = 0, i;// decimal , contador.
		//
		cout <<"\n Binario: ";//Pedindo binario.
		cin >> bin;//Recebendo binario.
		//
		int c = 0; // contador.
		//
		for( i=(strlen(bin)-1); i>=0; i--)// numero 0 ou 1 elevado pela posição.
		{	
			if(bin[c] == '0'){ // transformando str para int.
				dec += 0;
			}
			else if(bin[c] == '1'){ // transformando str para int.
				dec += pow(2,(i));
			}
			c++;
		}
		//
		cout <<"\n DECIMAL : "<<dec<<"\n";// mostrando resultado.
	return 0;
}
