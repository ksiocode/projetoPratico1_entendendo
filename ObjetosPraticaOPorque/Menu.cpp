#include "Header.h"



void Menu()
{
	char op = '0';
	cout << "### Menu de Escolha, o que voce quer fazer ###" << endl;
	cout << "1 - Ler 1 jogador por 1 Variavel e Mostrar" << endl;
	cout << "2 - Ler 3 jogadores em um Vetor e Mostrar" << endl;
	cout << "3 - Ler 1 jogador em um Struct com Variaveis e Mostrar" << endl;
	cout << "33 - Ler 1 jogador em um Struct com Por Referencia e Mostrar" << endl;
	cout << "4 - Ler 5 jogadores em um Vetor de Struct e Mostrar" << endl;
	cout << "5 - Ler 1 jogador em um Objeto(class) com Variaveis e Mostrar" << endl;
	cout << "6 - Ler 5 jogadores em um Vetor de Objeto(class) e Mostrar" << endl;
	cout << "0 - Fechar o Programa" << endl;
	cout << endl << "Digite o Numero da Opcao escolhida" << endl;
	cout << "Opcao: ";
	cin >> op;
	clear_screen();

	
	switch (op)
	{
	case '0':
		exit(0); //Fecha o programa Imediatamente
		break;
	case '1':
		ColetaDados(); //Coleta os Dados e Armazena na Variavel Simples e Mostra Abaixo(Limita ter 1 variavel para cada Usuario)
		MostraDados();
		break;
	case '2':
		ColetaDadosVetor();  //Coleta os Dados e Armazena em um Vetor Simples e Mostra Abaixo(Limitado para ter 3 registros de Usuarios, seria necessario Mudar na compilação)
		MostraDadosVetor();
		break;
	case '3':
	{
		extern Player player1;
		ColetaDados(player1);
		MostraDados(player1);
		break;
	}
	case '33':
	{
		extern Player player2;
		ColetaDadosReferencia(player2);
		MostraDadosReferencia(player2);
	}
		break;
	case '4':
		break;
	case '5':
		break;
	case '6':
		break;
	default:
		break;
	}


}
