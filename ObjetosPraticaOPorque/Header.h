#pragma once
#include <iostream>
#include "string.h"

using namespace std;

void Menu();
void ColetaDados(); // Prototipo da função para ser reconhecido pelo arquivo main
void MostraDados();

#define MAX_USERS_VEC 3
void ColetaDadosVetor();
void MostraDadosVetor();