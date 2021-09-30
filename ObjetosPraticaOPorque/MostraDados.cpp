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




//Struct global por COPIA e Não Referencia para o Coletor para a função(Modo Horrivel)
extern Player player1;; //Extern vai referenciar com a Declaração da Struct pelo Arquivo ColetaDados onde ela é Inicializada com Valor

void MostraDados(Player jogador) //Passa o tipo jogador mas não é usado é só para sobrecarga da função
{
	cout << endl << endl;
	cout << "[Nome Completo]  |" << '\t';
	cout << "[Login]  |" << '\t';
	cout << "[Senha]  |" << '\t';
	cout << "[Idade]  |" << '\t';
	cout << "[Sexo]  |" << '\t';
	cout << "[Estado]" << endl;

	cout << player1.s_colectName << " | " << '\t';
	cout << player1.s_colectLogin << " | " << '\t';
	cout << player1.s_colectSenha << " | " << '\t';
	cout << player1.s_colectIdade << " | " << '\t';
	cout << player1.s_colectSexo << " | " << '\t';
	cout << player1.s_colectEstado << endl;
}



void MostraDadosReferencia(Player &jogador) //Passa o tipo jogador mas não é usado é só para sobrecarga da função
{
	cout << endl << endl;
	cout << "[Nome Completo]  |" << '\t';
	cout << "[Login]  |" << '\t';
	cout << "[Senha]  |" << '\t';
	cout << "[Idade]  |" << '\t';
	cout << "[Sexo]  |" << '\t';
	cout << "[Estado]" << endl;

	cout << jogador.s_colectName << " | " << '\t';
	cout << jogador.s_colectLogin << " | " << '\t';
	cout << jogador.s_colectSenha << " | " << '\t';
	cout << jogador.s_colectIdade << " | " << '\t';
	cout << jogador.s_colectSexo << " | " << '\t';
	cout << jogador.s_colectEstado << endl;
}


void MostraDadosVetorStruct()
{

	extern Player players[];

	cout << endl << endl;
	cout << "[Nome Completo]  |" << '\t';
	cout << "[Login]  |" << '\t';
	cout << "[Senha]  |" << '\t';
	cout << "[Idade]  |" << '\t';
	cout << "[Sexo]  |" << '\t';
	cout << "[Estado]" << endl;

	int indice = 0;
	while (indice < MAX_PLAYERS) //Usei o While porque para quem só usa for é igual só Saber usar o martelo, todo problema pra ele vai achar que é prego
	{
		if (strcmp(players[indice].s_colectName, "0") == 0) //para de Imprimir quando encontra o Digito 0
		{
			cout << endl;
			break;
		}
		cout << players[indice].s_colectName << " | " << '\t';
		cout << players[indice].s_colectLogin << " | " << '\t';
		cout << players[indice].s_colectSenha << " | " << '\t';
		cout << players[indice].s_colectIdade << " | " << '\t';
		cout << players[indice].s_colectSexo << " | " << '\t';
		cout << players[indice].s_colectEstado << endl;
		indice++;
	}

	cout << endl;
}
