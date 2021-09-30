#include "Header.h"

enum e_opc
{
	e_opc_exit = 0,
	e_opc_1variavel,
	e_opc_vetor3jogadores,
	e_opc_struct1jogador,
	e_opc_struct1jogadorreferencia,
	e_opc_structvetor5jogadores,
	e_opc_structvetor5jogadoresreferencia,
	e_opc_class1jogador,
	e_opc_classvetor5jogadores,
	e_opc_classvetor5jogadoresreferencia
};

void Menu()
{
	int op = 0;
	cout << "### Menu de Escolha, o que voce quer fazer ###" << endl;
	cout << e_opc_1variavel << " - Ler 1 jogador por 1 Variavel e Mostrar" << endl;
	cout << e_opc_vetor3jogadores << " - Ler 3 jogadores em um Vetor e Mostrar" << endl;
	cout << e_opc_struct1jogador << " - Ler 1 jogador em um Struct com Variaveis e Mostrar" << endl;
	cout << e_opc_struct1jogadorreferencia << " - Ler 1 jogador em um Struct com Por Referencia e Mostrar" << endl;
	cout << e_opc_structvetor5jogadores << " - Ler 5 jogadores em um Vetor de Struct e Mostrar" << endl;
	cout << e_opc_structvetor5jogadoresreferencia <<" - Ler 5 jogadores em um Vetor de Struct Referencia e Mostrar" << endl;
	cout << e_opc_class1jogador << " - Ler 1 jogador em um Objeto(class) com Variaveis e Mostrar" << endl;
	cout << e_opc_classvetor5jogadores << " - Ler 5 jogadores em um Vetor de Objeto(class) e Mostrar" << endl;
	cout << e_opc_classvetor5jogadoresreferencia << " - Ler 5 jogadores em um Vetor de Objeto(class) Referencia e Mostrar" << endl;
	cout << e_opc_exit << " - Fechar o Programa" << endl;
	cout << endl << "Digite o Numero da Opcao escolhida" << endl;
	cout << "Opcao: ";
	cin >> op;
	clear_screen();

	
	switch (op)
	{
	case e_opc_exit:
		exit(EXIT_SUCCESS); //Fecha o programa Imediatamente
		break;
	case e_opc_1variavel:
		ColetaDados(); //Coleta os Dados e Armazena na Variavel Simples e Mostra Abaixo(Limita ter 1 variavel para cada Usuario)
		MostraDados();
		break;
	case e_opc_vetor3jogadores:
		ColetaDadosVetor();  //Coleta os Dados e Armazena em um Vetor Simples e Mostra Abaixo(Limitado para ter 3 registros de Usuarios, seria necessario Mudar na compilação)
		MostraDadosVetor();
		break;
	case e_opc_struct1jogador:
	{
		extern Player player1;
		ColetaDados(player1);
		MostraDados(player1);
		
	}
		break;
	case e_opc_struct1jogadorreferencia:
	{
		extern Player player2;
		ColetaDadosReferencia(player2);
		MostraDadosReferencia(player2);
	}
		break;
	case e_opc_structvetor5jogadores:
	{
		ColetaDadosVetorStruct();
		MostraDadosVetorStruct();
	}
		break;
	case e_opc_structvetor5jogadoresreferencia:
		break;
	case e_opc_class1jogador:
		break;
	case e_opc_classvetor5jogadores:
		break;
	case e_opc_classvetor5jogadoresreferencia:
		break;
	default:
		break;
	}


}
