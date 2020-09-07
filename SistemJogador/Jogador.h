//
//  Jogador.h
//  SistemJogador
//
//  Created by Allysson Martins on 07/09/20.
//  Copyright © 2020 Allysson Martins. All rights reserved.
//
#include <stdio.h>

typedef struct {
    int codigo;
    int jogos;
    int gols;
    int assistencias;
}Jogador;

//cabeçalho das funções

void Atribui (Jogador*, int, int, int, int);
void Imprime (Jogador);
void Analise (Jogador*, int, int);
