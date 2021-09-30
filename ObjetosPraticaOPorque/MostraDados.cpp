#include "Header.h"

//Variaveis globais para o Coletor para a função(Modo Horrivel)
extern char colectName[64]; //Extern vai referenciar com a Declaração da Variavel pelo Arquivo ColetaDados onde ela é Inicializada com Valor
extern string colectLogin;
extern string colectSenha;
extern int colectIdade;
extern char colectSexo;
extern string colectEstado;



void MostraDados()
{
	cout << endl << endl;
	cout << "[Nome Completo]  |" << '\t';
	cout << "[Login]  |" << '\t';
	cout << "[Senha]  |" << '\t';
	cout << "[Idade]  |" << '\t';
	cout << "[Sexo]  |" << '\t';
	cout << "[Estado]" << endl;

	cout << colectName << " | " << '\t';
	cout << colectLogin << " | " << '\t';
	cout << colectSenha << " | " << '\t';
	cout << colectIdade << " | " << '\t';
	cout << colectSexo << " | " << '\t';
	cout << colectEstado << endl;
}


//Vetor global para o Coletor para a função(Modo Horrivel)
extern char colectNameVector[MAX_USERS_VEC][64]; //3 Usuarios com até 64 Digitos
extern string colectLoginVector[MAX_USERS_VEC];
extern string colectSenhaVector[MAX_USERS_VEC];
extern int colectIdadeVector[MAX_USERS_VEC];
extern char colectSexoVector[MAX_USERS_VEC];
extern string colectEstadoVector[MAX_USERS_VEC];

void MostraDadosVetor()
{
	cout << endl << endl;
	cout << "[Nome Completo]  |" << '\t';
	cout << "[Login]  |" << '\t';
	cout << "[Senha]  |" << '\t';
	cout << "[Idade]  |" << '\t';
	cout << "[Sexo]  |" << '\t';
	cout << "[Estado]" << endl;

	int indice = 0;
	while (indice < MAX_USERS_VEC) //Usei o While porque para quem só usa for é igual só Saber usar o martelo, todo problema pra ele vai achar que é prego
	{
		if (strcmp(colectNameVector[indice], "0") == 0) //para de Imprimir quando encontra o Digito 0
		{
			cout << endl;
			break;
		}
		cout << colectNameVector[indice] << " | " << '\t';
		cout << colectLoginVector[indice] << " | " << '\t';
		cout << colectSenhaVector[indice] << " | " << '\t';
		cout << colectIdadeVector[indice] << " | " << '\t';
		cout << colectSexoVector[indice] << " | " << '\t';
		cout << colectEstadoVector[indice] << endl;
		indice++;
	}
	
	cout << endl;
}