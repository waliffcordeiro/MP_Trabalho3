#ifndef _HOME_WALIFFCORDEIRO_UNB_MP_TRABALHO2_170115810_WALIFF_INCLUDE_CONTADOR_H_
#define _HOME_WALIFFCORDEIRO_UNB_MP_TRABALHO2_170115810_WALIFF_INCLUDE_CONTADOR_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// "Copyright [2018] <Copyright Waliff Cordeiro>"

/**
* @file contador.h
*
* @brief Módulo que contém apenas a função que realiza a contagem de linhas. A função contém todo o código necessário.
* seus procedimentos internos estão implementados de maneira clara e devidamente comentados.
*
* @author Waliff Cordeiro Bandeira
*
*/


/**
* @brief Função que conta a quantidade de linhas de código útil em um programa na linguagem C. O programa também
* mantém o registro do número de linhas em branco, comentadas e totais, de maneira que com uma simples subtração 
* é possível obter o número de linhas úteis no arquivo.
*
* @param char nomeArquivo[] - nome do arquivo de entrada, que será inicializado dentro da função
* @param int linhas_comentadas - flag verificadora
* @param int linhas_vazias - flag verificadora
*
* @return - retorna o número de linhas úteis da função
*
*/

int contador(char nomeArquivo[], int linhas_comentarios, int linhas_vazias);

#endif  // _HOME_WALIFFCORDEIRO_UNB_MP_TRABALHO2_170115810_WALIFF_INCLUDE_CONTADOR_H_
