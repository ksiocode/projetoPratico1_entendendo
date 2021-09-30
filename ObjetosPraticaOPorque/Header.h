#pragma once
#include <iostream>
#include <string>
#include "Player.h"
#include "LimpaTela.h"

void cls(HANDLE hConsole);





using namespace std;

void Menu();
void ColetaDados(); // Prototipo da função para ser reconhecido pelo arquivo main
void MostraDados();

#define MAX_USERS_VEC 3
void ColetaDadosVetor();
void MostraDadosVetor();


void ColetaDados(Player jogador);
void MostraDados(Player jogador);


void ColetaDadosReferencia(Player &jogador);
void MostraDadosReferencia(Player &jogador);