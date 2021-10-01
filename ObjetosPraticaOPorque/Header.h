#pragma once
#include <iostream>
#include <string>
#include "Player.h"
#include "LimpaTela.h"

///void cls(HANDLE hConsole);





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


const static int MAX_PLAYERS = 5;
void ColetaDadosVetorStruct();
void MostraDadosVetorStruct();


void ColetaDadosVetorStruct(Player *players_ref);
void MostraDadosVetorStruct(Player *players_ref);


void ColetaDados(PlayerObj *jogador);
void MostraDados(PlayerObj *jogador);


void ColetaDadosVetorClass(PlayerObj *jogador);
void MostraDadosVetorClass(PlayerObj *players_ref);

void Basico();