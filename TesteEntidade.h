#ifndef TESTEENTIDADE_H_INCLUDED
#define TESTEENTIDADE_H_INCLUDED

#include "Entidade.h"

using namespace std;

/**
 * @brief Classe TUUsuario (Teste Unidade do Usuario): testa se os atributos da classe Usuario armazenaram valores validos corretamente.
 */

class TUUsuario {
    private:
        const string VALOR_VALIDO_NOME = "Aluizio Oliveira";
        const string VALOR_VALIDO_MATRICULA = "ABCD1234";
        const string VALOR_VALIDO_SENHA = "V1NI2C";
        Usuario *usuario;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();

    public:
        /**
        * @brief Variaveis Sucesso e Falha para determinar os resultados do teste
        * Metodo run para executar os testes.
        */
        const static int SUCESSO =  0;
        const static int FALHA   = -1;
        int run();
};

/**
 * @brief Classe TUProjeto (Teste Unidade do Projeto): testa se os atributos da classe Projeto armazenaram valores validos corretamente.
 */

class TUProjeto {
    private:
        const string VALOR_VALIDO_TNOME = "Aluizio Oliveira Goncalves";
        const string VALOR_VALIDO   = "07970283152";
        const string VALOR_VALIDO_TDESCRICAO = "Ivanov marca o gol do hexa";
        Projeto *projeto;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();

    public:
        /**
        * @brief Variaveis Sucesso e Falha para determinar os resultados do teste
        * Metodo run para executar os testes.
        */

        const static int SUCESSO =  0;
        const static int FALHA   = -1;
        int run();
};


/**
 * @brief Classe TUTarefa (Teste Unidade da Tarefa): testa se os atributos da classe Tarefa armazenaram valores validos corretamente.
 */

class TUTarefa{
    private:
        const string VALOR_VALIDO_TNOME = "Aluizio Oliveira Goncalves";
        const string VALOR_VALIDO   = "07970283152";
        const string VALOR_VALIDO_IDATA  = "01-05-22";
        const string VALOR_VALIDO_TDATA  = "17-07-22";
        const string VALOR_VALIDO_DISCIPLINA = "Arquitetura";
        Tarefa *tarefa;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();

    public:
        /**
        * @brief Variaveis Sucesso e Falha para determinar os resultados do teste
        * Metodo run para executar os testes.
        */
        const static int SUCESSO =  0;
        const static int FALHA   = -1;
        int run();

};

#endif // TESTEENTIDADE_H_INCLUDED
