//
//  Jogador.c
//  SistemJogador
//
//  Created by Allysson Martins on 07/09/20.
//  Copyright © 2020 Allysson Martins. All rights reserved.
//
#include <stdio.h>
#include "Jogador.h"

void Atribui(Jogador* pjogador, int codigo, int jogos, int gols, int assistencias) {
    pjogador->codigo = codigo;
    pjogador->jogos = jogos;
    pjogador->gols = gols;
    pjogador->assistencias = assistencias;
}

void Imprime (Jogador jogador) {
    printf("Codigo: %d \n", jogador.codigo);
    printf("Quantidade de Jogos: %d \n", jogador.jogos);
    printf("Quantidade de Gols: %d \n", jogador.gols);
    printf("Quantidade de Assistências: %d \n", jogador.assistencias);
 
}
