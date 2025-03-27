#ifndef CLINGUA_H
#define CLINGUA_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

/* Definições de palavras-chave principais */
#define inteiro        int
#define principal      main
#define imprimir       printf
#define retornar       return
#define se             if
#define senao          else
#define enquanto       while
#define para           for
#define estrutura      struct
#define enumeracao     enum
#define constante      const
#define estatica       static
#define registrar      register
#define volatil        volatile

/* Tipos de dados */
#define caractere      char
#define flutuante      float
#define duplo          double
#define vazio          void
#define booleano       bool

/* Valores booleanos */
#define VERDADEIRO     true
#define FALSO          false

/* Entrada e saída */
#define ler(p)           scanf("%d", &(p))

/* Utilitários */
#define esperar(t)         sleep(t)

/* Memória */
#define alocar(tamanho)       malloc(tamanho)
#define realocar(ptr, tamanho) realloc(ptr, tamanho)
#define liberar(ptr)          free(ptr)

/* Constantes */
#define NULO            NULL

#endif /* CLINGUA_H */