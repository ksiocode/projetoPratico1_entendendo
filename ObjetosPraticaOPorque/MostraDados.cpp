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
extern Player player1; //Extern vai referenciar com a Declaração da Struct pelo Arquivo ColetaDados onde ela é Inicializada com Valor

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



void MostraDadosReferencia(Player &jogador) //Passa o tipo jogador por referencia para não haver Copia (Duplicada de Dados na Memoria)
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




void MostraDadosVetorStruct(Player * players_ref) //Passa o tipo players por referencia para não haver Copia (Duplicada de Dados na Memoria)
{
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
		if (strcmp(players_ref[indice].s_colectName, "0") == 0) //para de Imprimir quando encontra o Digito 0
		{
			cout << endl;
			break;
		}
		cout << players_ref[indice].s_colectName << " | " << '\t';
		cout << players_ref[indice].s_colectLogin << " | " << '\t';
		cout << players_ref[indice].s_colectSenha << " | " << '\t';
		cout << players_ref[indice].s_colectIdade << " | " << '\t';
		cout << players_ref[indice].s_colectSexo << " | " << '\t';
		cout << players_ref[indice].s_colectEstado << endl;
		indice++;
	}

	cout << endl;
}




//Struct global por Referencia para o Coletor para a função(Modo Bom não há duplicadas)
extern PlayerObj player1Obj; //Extern vai referenciar com a Declaração da Struct pelo Arquivo ColetaDados onde ela é Inicializada com Valor

void MostraDados(PlayerObj *jogador) //Passa o tipo jogador mas não é usado é só para sobrecarga da função, *jogador ponteiro recebe o endereço de memoria onde esta alocado o player1Obj como referencia
{
	cout << endl << endl;
	cout << "[Nome Completo]  |" << '\t';
	cout << "[Login]  |" << '\t';
	cout << "[Senha]  |" << '\t';
	cout << "[Idade]  |" << '\t';
	cout << "[Sexo]  |" << '\t';
	cout << "[Estado]" << endl;

	cout << jogador->s_colectName << " | " << '\t';  //  -> a flechinha é o operador de acesso por referencia ao inves do "." ponto
	cout << jogador->s_colectLogin << " | " << '\t';
	cout << jogador->s_colectSenha << " | " << '\t';
	cout << jogador->s_colectIdade << " | " << '\t';
	cout << jogador->s_colectSexo << " | " << '\t';
	cout << jogador->s_colectEstado << endl;
}



void MostraDadosVetorClass(PlayerObj * players_ref) //Passa o tipo players por referencia para não haver Copia (Duplicada de Dados na Memoria)
{
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
		if (strcmp(players_ref[indice].s_colectName, "0") == 0) //para de Imprimir quando encontra o Digito 0
		{
			cout << endl;
			break;
		}
		cout << players_ref[indice].s_colectName << " | " << '\t';
		cout << players_ref[indice].s_colectLogin << " | " << '\t';
		cout << players_ref[indice].s_colectSenha << " | " << '\t';
		cout << players_ref[indice].s_colectIdade << " | " << '\t';
		cout << players_ref[indice].s_colectSexo << " | " << '\t';
		cout << players_ref[indice].s_colectEstado << endl;
		indice++;
	}

	cout << endl;
}



void Basico()
{

	struct Pessoa 
	{
		string nome;
		int idade;
		char sexo;
	};

	Pessoa p1 = {"Pessoa1", 20, 'M'}; //Setei uma pessoa direto
	Pessoa* pes = &p1; //Referenciei o endereço pessoa em pes com tipo Pessoa


		cout << pes->nome << endl;  //Apos colocar dentro de um Ponteiro eu posso acessar pelo operador seta ->
		cout << pes->idade << endl;
		cout << pes->sexo << endl;
	
}




void BasicoVectorReferenc()
{

	class Pessoax
	{
	public:
		string nome;
		int idade;
		char sexo;
	};

	Pessoax VecPex[10];

	VecPex[0] = { "Pessoa1", 10, 'M' };
	VecPex[1] = { "Pessoa2", 20, 'F' };
	VecPex[2] = { "Pessoa3", 30, 'M' };
	VecPex[3] = { "Pessoa4", 40, 'F' };
	VecPex[4] = { "Pessoa5", 50, 'M' };
	VecPex[5] = { "Pessoa6", 60, 'F' };
	VecPex[6] = { "Pessoa7", 70, 'M' };
	VecPex[7] = { "Pessoa8", 80, 'F' };
	VecPex[8] = { "Pessoa9", 90, 'M' };
	VecPex[9] = { "Pessoa10", 100, 'F' };



	struct Pessoas
	{
		string nome;
		int idade;
		char sexo;
	};

	Pessoas p1;
	Pessoas* pes = &p1; //Referenciei o endereço pessoa em pes com tipo Pessoa

	Pessoas p2Vec[10];
	Pessoas* pvec = p2Vec; //Não precisa colocar [10] no p2Vec porque um Vetor contem um endereço dele onde começa na variavel

	for (int i = 0; i < 10; i++)
	{
		pes->nome = VecPex[i].nome;
		pes->idade = VecPex[i].idade;
		pes->sexo = VecPex[i].sexo;	

		pvec[i].nome = VecPex[i].nome;
		pvec[i].idade = VecPex[i].idade;
		pvec[i].sexo = VecPex[i].sexo;

		//Esses dados só Existe dentro do Escopo do for, pois Pessoas pes não é Vetor e não é alocado dinamicamente na Memoria
		cout << "Atribuicao Durante a Iteracao: " << pes->nome << endl;  //Apos colocar dentro de um Ponteiro eu posso acessar pelo operador seta ->
		cout << "Atribuicao Durante a Iteracao: " << pes->idade << endl;
		cout << "Atribuicao Durante a Iteracao: " << pes->sexo << endl;
	}


	cout << endl;
	cout << "Esse eh o Resultado só salvou o Ultimo e Objeto não tem um vetor nele, só a Struct";

	for (int i = 0; i < 10; i++)
	{

		cout << pes->nome << endl;  //Apos colocar dentro de um Ponteiro eu posso acessar pelo operador seta ->
		cout << pes->idade << endl;
		cout << pes->sexo << endl;
		
	}

	cout << "--------------" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << pvec[i].nome << endl;  //Apos colocar dentro de um Ponteiro eu posso acessar pelo operador seta ->
		cout << pvec[i].idade << endl;
		cout << pvec[i].sexo << endl;
	}
}