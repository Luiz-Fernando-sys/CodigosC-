// Aluno: Luiz Fernando Adami dos Reis
// Curso: An�lise e Desenvolvimento de Sistemas
// Disciplina: Estrutura de Dados
// ATIVIDADE: n� 7

// Proposta: Desenvolver um programa recursivo que leia um n�mero inicial e um n�mero final passado pelo usu�rio, e exibe apenas os n�meros pares que ficam entre estes n�meros/intervalo passados pelo usu�rio.

// -------------------------------------------------------------------------------------------------------


// Declara��o das principais bibliotecas
#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

// Fun��o recursiva para exibir todos os n�meros de um dado intervalo.
int exibetodos(int n1, int n2){
	// Se o primeiro n�mero que o usu�rio digitou for menor ou igual ao segundo n�mero, ent�o cai na segunda verifica��o do segundo IF condicional.
	if(n1<=n2){
		// Se o primeiro n�mero ao ser dividido por 2 ter o resto zero, significa que ele � par, por isso iremos mandar escrever na tela.
		if (n1%2 == 0){
			cout << n1 << ", ";
			
			// E tamb�m iremos mandar voltar na fun��o novamente, dando a ela recrsividade.
			// S� que agora, o primeiro n�mero ser� incrementado de 1 e passaremos o segundo n�mero digitado pelo usu�rio mais uma vez na fun��o.
			return exibetodos(n1+1, n2);
		}else{
			// Se o resto da divis�o do primeiro n�mero por 2 n�o for 0, significa que a fun��o n�o � recursiva e, ent�o, voltamos na fun��o novamente, s� que a gora iremos incrementar 1 do n1 e passar o n2 novamente do jeito que estava da primeira vez.
			return exibetodos(n1+1, n2);
		}		
	} // Se ao chamarmos a fun��o dentro dela mesma, a primeira verifica��o l� em cima que se encerra aqui, identificar que o n1 � maior que n2, significa que j� chegamos no limite estipulado pelo usu�rio e o programa pode sair da verifica��o.
} // Aqui se encerra a fun��o recursiva.

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
	cout << "Os n�mero pares entre " << numero1 << " e " << numero2 << " s�o: \n";
	
	// Chamando a fun��o recursiva.
	exibetodos(numero1, numero2);
	
	return 0;
}