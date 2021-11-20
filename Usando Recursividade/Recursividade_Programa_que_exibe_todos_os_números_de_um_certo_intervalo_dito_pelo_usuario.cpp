// Aluno: Luiz Fernando Adami dos Reis
// Curso: Análise e Desenvolvimento de Sistemas
// Disciplina: Estrutura de Dados
// ATIVIDADE: nº 6

// Proposta: Desenvolver um programa que leia um número inicial e um número final passado pelo usuário, e exibe todos números dentro dele, incluindo estes números também. 

// -------------------------------------------------------------------------------------------------------


// Declaração das principais bibliotecas
#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

// Função recursiva para exibir todos os números de um dado intervalo.
int exibetodos(int n1, int n2){
	if (n1<n2){
		cout << n1 << ", ";
		// Caso o n1 ainda seja menor que n2, chamamos a função novamente e acrescentamos 1 unidade a ela, para que ele entre com um n1 maior desta vez.
		return exibetodos(n1+1, n2);
	}else{
		// Se o n1 for igual a n2, exibimos ele e saimos da condicional.
		if(n1 == n2){
			cout << "e " << n2;
			return n2;
		}		
	}
}

// Função principal.
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	// Declaração das variáveis.
	int numero1, numero2;
	
	cout << "Diga o primeiro número (valor inicial): ";
	cin >> numero1;
	cout << "\nInforme o segundo número (valor final): ";
	cin >> numero2;
	
	system("cls");
	cout << "Os número entre " << numero1 << " e " << numero2 << " são: \n";
	
	// Chamando a função recursiva.
	exibetodos(numero1, numero2);
	
	return 0;
}