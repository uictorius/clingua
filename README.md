# Clingua - C em português 💻

Uma "linguagem de programação" baseada em C, com sintaxe em português.

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
