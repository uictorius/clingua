#ifndef CLINGUA_H
#define CLINGUA_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* Palavras-chave principais */
#define inteiro      int
#define principal    main
#define imprimir     printf
#define retornar     return
#define se           if
#define senao        else
#define enquanto     while(1)
#define para         for
#define estrutura    struct
#define enumeracao   enum

/* Tipos de dados */
#define caractere    char
#define flutuante    float
#define duplo        double
#define vazio        void

/* Funções de I/O */
#define ler(p)          scanf("%d", &p)
#define ler_flutuante(p) scanf("%f", &p)
#define ler_texto(p, t) scanf("%" #t "s", p)
#define limpar_buffer   while(getchar() != '\n')

/* Utilitários */
#define esperar(t)      sleep(t)
#define tamanho_array(arr) sizeof(arr)/sizeof(arr[0])

/* Constantes */
#define VERDADEIRO      1
#define FALSO           0
#define NULO            NULL

#endif