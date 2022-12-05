#ifndef TESTE_H_INCLUDED
#define TESTE_H_INCLUDED

#include "Dominios.h"
#include "Entidade.h"

using namespace std;

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe Codigo.

class TUCodigo{
    private:
        const string VALOR_VALIDO   = "07970283152";    // Definição de constante para evitar número mágico.
        const string VALOR_INVALIDO = "07970283155";    // Definição de constante para evitar número mágico.
        Codigo *codigo;                                 // Referência para unidade em teste.
        int  estado;                                    // Estado do teste.
        void setUp();                                   // Método para criar unidade em teste.
        void tearDown();                                // Método para destruir unidade em teste.
        void testarCenarioSucesso();                    // Cenário de teste.
        void testarCenarioFalha();                      // Cenário de teste.

    public:
        const static int SUCESSO =  0;                  // Definição de constante para reportar resultado de teste.
        const static int FALHA   = -1;                  // Definição de constante para reportar resultado de teste.
        int run();                                      // Método para executar teste.
};

class TUNome{
    private:
        const string VALOR_VALIDO   = "Aluizio Ol Go Filho";    // Definição de constante para evitar número mágico.
        const string VALOR_INVALIDO = "Alúizio Oliveira Gonçalves Filho";    // Definição de constante para evitar número mágico.
        Nome *Nome;                                 // Referência para unidade em teste.
        int  estado;                                    // Estado do teste.
        void setUp();                                   // Método para criar unidade em teste.
        void tearDown();                                // Método para destruir unidade em teste.
        void testarCenarioSucesso();                    // Cenário de teste.
        void testarCenarioFalha();                      // Cenário de teste.

    public:
        const static int SUCESSO =  0;                  // Definição de constante para reportar resultado de teste.
        const static int FALHA   = -1;                  // Definição de constante para reportar resultado de teste.
        int run();
};


#endif // TESTE_H_INCLUDED
