#ifndef TESTE_H_INCLUDED
#define TESTE_H_INCLUDED

#include "Dominios.h"
#include "Entidade.h"

using namespace std;

/**
 * @brief
 * Definicao do teste de unidade do dominio Codigo.
 */

class TUCodigo{
    private:
        const string VALOR_VALIDO   = "07970283152";
        const string VALOR_INVALIDO = "07970283155";
        Codigo *codigo;
        int  estado;
        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        /**
         * @brief Variavel Sucesso para determinar os resultados do teste
         */
        const static int SUCESSO =  0;
        /**
         * @brief Variavel Falha para determinar os resultados do teste
         */
        const static int FALHA   = -1;
        /**
        * @brief Metodo run para executar o testes.
        */
        int run();
};

/**
 * @brief
 * Definicao do teste de unidade do dominio Nome.
 */

class TUNome{
    private:
        const string VALOR_VALIDO   = "Aluizio Oliveira Gon";
        const string VALOR_INVALIDO = "Aluizio Oliveira Goncalves Filho";
        Nome *nome;
        int  estado;
        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        /**
         * @brief Variavel Sucesso para determinar os resultados do teste
         */
        const static int SUCESSO =  0;
        /**
         * @brief Variavel Falha para determinar os resultados do teste
         */
        const static int FALHA   = -1;
        /**
        * @brief Metodo run para executar o testes.
        */
        int run();
};


/**
 * @brief
 * Definicao do teste de unidade do dominio Matricula.
 */

class TUMatricula{
    private:
        const string VALOR_VALIDO   = "ABCD1234";
        const string VALOR_INVALIDO = "ABC1D234";
        Matricula *matricula;
        int  estado;
        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        /**
         * @brief Variavel Sucesso para determinar os resultados do teste
         */
        const static int SUCESSO =  0;
        /**
         * @brief Variavel Falha para determinar os resultados do teste
         */
        const static int FALHA   = -1;
        /**
        * @brief Metodo run para executar o testes.
        */
        int run();
};


/**
 * @brief
 * Definicao do teste de unidade do dominio Senha.
 */

class TUSenha{
    private:
        const string VALOR_VALIDO   = "V1NI2C";
        const string VALOR_INVALIDO = "111111";
        Senha *senha;
        int  estado;
        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        /**
         * @brief Variavel Sucesso para determinar os resultados do teste
         */
        const static int SUCESSO =  0;
        /**
         * @brief Variavel Falha para determinar os resultados do teste
         */
        const static int FALHA   = -1;
        /**
        * @brief Metodo run para executar o testes.
        */
        int run();
};


/**
 * @brief
 * Definicao do teste de unidade do dominio Texto.
 */

class TUTexto{
    private:
        const string VALOR_VALIDO = "Aluíziooo.";
        const string VALOR_INVALIDO = "--..!!Aa2rf";
        Texto *texto;
        int  estado;
        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        /**
         * @brief Variavel Sucesso para determinar os resultados do teste
         */
        const static int SUCESSO =  0;
        /**
         * @brief Variavel Falha para determinar os resultados do teste
         */
        const static int FALHA   = -1;
        /**
        * @brief Metodo run para executar o testes.
        */
        int run();
};


/**
 * @brief
 * Definicao do teste de unidade do dominio Data.
 */

class TUData{
    private:
        const string VALOR_VALIDO = "01-05-22";
        const string VALOR_INVALIDO = "29-02-22";
        Data *data;
        int  estado;
        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        /**
         * @brief Variavel Sucesso para determinar os resultados do teste
         */
        const static int SUCESSO =  0;
        /**
         * @brief Variavel Falha para determinar os resultados do teste
         */
        const static int FALHA   = -1;
        /**
        * @brief Metodo run para executar o testes.
        */
        int run();

};


/**
 * @brief
 * Definicao do teste de unidade do dominio Disciplina.
 */


class TUDisciplina{
    private:
        const string VALOR_VALIDO = "Arquitetura";
        const string VALOR_INVALIDO = "Disciplinas";
        Disciplina *disciplina;
        int  estado;
        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        /**
         * @brief Variavel Sucesso para determinar os resultados do teste
         */
        const static int SUCESSO =  0;
        /**
         * @brief Variavel Falha para determinar os resultados do teste
         */
        const static int FALHA   = -1;
        /**
        * @brief Metodo run para executar o testes.
        */
        int run();
};



#endif // TESTE_H_INCLUDED
