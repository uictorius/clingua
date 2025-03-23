#include <clingua.h>

inteiro principal() {
    imprimir("Bem-vindo à Clingua!\n");
    
    // Entrada de dados
    inteiro idade;
    imprimir("Digite sua idade: ");
    ler(idade);
    limpar_buffer;
    
    // Controle de fluxo
    se (idade >= 18) {
        imprimir("Você é adulto!\n");
    } senao {
        imprimir("Você é menor de idade!\n");
    }
    
    // Loop com macro personalizada
    para (inteiro i = 0; i < 3; i++) {
        imprimir("Iteração %d\n", i+1);
    }
    
    // Estrutura de dados
    estrutura Pessoa {
        caractere nome[50];
        inteiro idade;
    };
    
    estrutura Pessoa usuario = {"João", 25};
    imprimir("Usuário: %s (%d anos)\n", usuario.nome, usuario.idade);
    
    retornar 0;
}