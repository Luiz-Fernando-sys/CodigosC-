// Aluno: Luiz Fernando Adami dos Reis
// Curso: An�lise e Desenvolvimento de Sistemas
// Disciplina: Estrutura de Dados
// ATIVIDADE: n� 6

// Proposta: Desenvolver um programa que leia um n�mero inicial e um n�mero final passado pelo usu�rio, e exibe todos n�meros dentro dele, incluindo estes n�meros tamb�m. 

// -------------------------------------------------------------------------------------------------------


// Declara��o das principais bibliotecas
#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

// Fun��o recursiva para exibir todos os n�meros de um dado intervalo.
int exibetodos(int n1, int n2){
	if (n1<n2){
		cout << n1 << ", ";
		// Caso o n1 ainda seja menor que n2, chamamos a fun��o novamente e acrescentamos 1 unidade a ela, para que ele entre com um n1 maior desta vez.
		return exibetodos(n1+1, n2);
	}else{
		// Se o n1 for igual a n2, exibimos ele e saimos da condicional.
		if(n1 == n2){
			cout << "e " << n2;
			return n2;
		}		
	}
}

// Fun��o principal.
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	// Declara��o das vari�veis.
	int numero1, numero2;
	
	cout << "Diga o primeiro n�mero (valor inicial): ";
	cin >> numero1;
	cout << "\nInforme o segundo n�mero (valor final): ";
	cin >> numero2;
	
	system("cls");
	cout << "Os n�mero entre " << numero1 << " e " << numero2 << " s�o: \n";
	
	// Chamando a fun��o recursiva.
	exibetodos(numero1, numero2);
	
	return 0;
}