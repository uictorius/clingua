# Clingua - C em português 💻

CLingua é uma biblioteca que fornece uma camada de abstração para a linguagem C, traduzindo palavras-chave e funções essenciais para o português. Essa biblioteca é útil para iniciantes que desejam aprender programação em C utilizando terminologia em português.

## ✨ Funcionalidades

- Sintaxe em português simplificado
- Sistema de tipos completo
- Macros pré-definidas para operações comuns
- Compatível com código C tradicional
- Compilação simples com Makefile

## 📦 Pré-requisitos

- GCC (GNU Compiler Collection)
- Make
- Git (opcional)

## 🚀 Como Usar

1. Clone o repositório:
```bash
git clone https://github.com/uictorius/clingua.git
cd clingua
```
2. Compile o projeto:
```bash
make
```
3. Execute o programa:
```bash
./build/clingua
```

## 🔧 Comandos Disponíveis

| Comando        | Descrição                          |
|---------------|----------------------------------|
| `make`        | Compila o projeto               |
| `make clean`  | Remove todos os arquivos gerados |
| `make install` | Instala sistema-wide (opcional) |
| `make uninstall` | Remove a instalação          |

## 📂 Estrutura do Projeto

```
clingua/
├── Makefile
├── build/          # Binários gerados
├── include/
│   └── clingua.h  # Header da linguagem
└── src/
    └── main.c     # Código fonte exemplo
```

## 📄 Documentação da Biblioteca CLingua

### Definições de Palavras-chave Principais

| Palavra-chave CLingua | Equivalente em C | Descrição |
|----------------------|----------------|------------|
| `inteiro` | `int` | Define uma variável do tipo inteiro |
| `principal` | `main` | Função principal do programa |
| `imprimir` | `printf` | Exibe texto ou valores no console |
| `retornar` | `return` | Retorna um valor de uma função |
| `se` | `if` | Estrutura condicional |
| `senao` | `else` | Bloco condicional alternativo |
| `enquanto` | `while` | Laço de repetição enquanto a condição for verdadeira |
| `para` | `for` | Laço de repetição com controle de iteração |
| `estrutura` | `struct` | Declara uma estrutura de dados |
| `enumeracao` | `enum` | Declara um conjunto de valores nomeados |
| `constante` | `const` | Define um valor constante |
| `estatica` | `static` | Define uma variável com armazenamento estático |
| `registrar` | `register` | Sugere armazenamento em registrador |
| `volatil` | `volatile` | Indica que o valor da variável pode mudar inesperadamente |

### Tipos de Dados

| Palavra-chave CLingua | Equivalente em C | Descrição |
|----------------------|----------------|------------|
| `caractere` | `char` | Representa um caractere único |
| `flutuante` | `float` | Representa um número decimal de precisão simples |
| `duplo` | `double` | Representa um número decimal de precisão dupla |
| `vazio` | `void` | Indica que a função não retorna valor |
| `booleano` | `bool` | Representa valores `VERDADEIRO` ou `FALSO` |

### Valores Booleanos

| Palavra-chave CLingua | Equivalente em C |
|----------------------|----------------|
| `VERDADEIRO` | `true` |
| `FALSO` | `false` |

### Funções de Entrada e Saída

| Função CLingua | Equivalente em C | Descrição |
|--------------|----------------|------------|
| `ler(p)` | `scanf("%d", &p)` | Lê um número inteiro do usuário |

### Utilitários

| Função CLingua | Equivalente em C | Descrição |
|--------------|----------------|------------|
| `esperar(t)` | `sleep(t)` | Pausa a execução por `t` segundos |

### Gerenciamento de Memória

| Função CLingua | Equivalente em C | Descrição |
|--------------|----------------|------------|
| `alocar(tamanho)` | `malloc(tamanho)` | Aloca memória dinamicamente |
| `realocar(ptr, tamanho)` | `realloc(ptr, tamanho)` | Realoca memória dinamicamente |
| `liberar(ptr)` | `free(ptr)` | Libera memória alocada dinamicamente |

### Constantes

| Palavra-chave CLingua | Equivalente em C | Descrição |
|----------------------|----------------|------------|
| `NULO` | `NULL` | Representa um ponteiro nulo |


## 📝 Exemplo de Código

```c
#include <clingua.h>

inteiro principal() {
    imprimir("Olá Mundo da Clingua!\n");
    
    inteiro numero = 42;
    se (numero > 0) {
        imprimir("Número positivo!\n");
    }
    
    retornar 0;
}
```

## 🤝 Contribuição

Contribuições são bem-vindas!

## 📜 Licença

Este projeto está licenciado sob a Licença MIT - veja o arquivo LICENSE para detalhes.

Divirta-se! 🎉🚀
