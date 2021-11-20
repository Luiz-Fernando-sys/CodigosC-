#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float primeiro_valor, segundo_valor, terceiro_valor, media_aritmetica;
	
	cout << "Digite o primeiro valor: " << endl;
	cin >> primeiro_valor;
	cout << "Digite o segundo valor: " << endl;
	cin >> segundo_valor;
	cout << "Digite o terceiro valor: \n";
	cin >> terceiro_valor;
	
	media_aritmetica = (primeiro_valor + segundo_valor + terceiro_valor) / 3;
	
	cout << "Primeiro valor: " << primeiro_valor << "\n";
	cout << "Segundo valor: " << segundo_valor << "\n";
	cout << "Terceiro valor: " << terceiro_valor << "\n";
	cout << "\n";
	cout << "A média aritmética destes valores são: " << media_aritmetica << endl;
	
	system("PAUSE");
}