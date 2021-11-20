// Aluno: Luiz Fernando Adami dos Reis
// Curso: Análise e Desenvolvimento de Sistemas
// Disciplina: Estrutura de Dados
// ATIVIDADE: nº 7

// Proposta: Desenvolver um programa recursivo que leia um número inicial e um número final passado pelo usuário, e exibe apenas os números pares que ficam entre estes números/intervalo passados pelo usuário.

// -------------------------------------------------------------------------------------------------------


// Declaração das principais bibliotecas
#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

// Função recursiva para exibir todos os números de um dado intervalo.
int exibetodos(int n1, int n2){
	// Se o primeiro número que o usuário digitou for menor ou igual ao segundo número, então cai na segunda verificação do segundo IF condicional.
	if(n1<=n2){
		// Se o primeiro número ao ser dividido por 2 ter o resto zero, significa que ele é par, por isso iremos mandar escrever na tela.
		if (n1%2 == 0){
			cout << n1 << ", ";
			
			// E também iremos mandar voltar na função novamente, dando a ela recrsividade.
			// Só que agora, o primeiro número será incrementado de 1 e passaremos o segundo número digitado pelo usuário mais uma vez na função.
			return exibetodos(n1+1, n2);
		}else{
			// Se o resto da divisão do primeiro número por 2 não for 0, significa que a função não é recursiva e, então, voltamos na função novamente, só que a gora iremos incrementar 1 do n1 e passar o n2 novamente do jeito que estava da primeira vez.
			return exibetodos(n1+1, n2);
		}		
	} // Se ao chamarmos a função dentro dela mesma, a primeira verificação lá em cima que se encerra aqui, identificar que o n1 é maior que n2, significa que já chegamos no limite estipulado pelo usuário e o programa pode sair da verificação.
} // Aqui se encerra a função recursiva.

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
	cout << "Os número pares entre " << numero1 << " e " << numero2 << " são: \n";
	
	// Chamando a função recursiva.
	exibetodos(numero1, numero2);
	
	return 0;
}