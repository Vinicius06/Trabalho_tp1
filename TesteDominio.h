#ifndef TESTE_H_INCLUDED
#define TESTE_H_INCLUDED

#include "Dominios.h"
#include "Entidade.h"

using namespace std;

// --------------------------------------------------------------------------
// Declara��o de classe para teste de unidade de classe Codigo.

class TUCodigo{
    private:
        const string VALOR_VALIDO   = "07970283152";    // Defini��o de constante para evitar n�mero m�gico.
        const string VALOR_INVALIDO = "07970283155";    // Defini��o de constante para evitar n�mero m�gico.
        Codigo *codigo;                                 // Refer�ncia para unidade em teste.
        int  estado;                                    // Estado do teste.
        void setUp();                                   // M�todo para criar unidade em teste.
        void tearDown();                                // M�todo para destruir unidade em teste.
        void testarCenarioSucesso();                    // Cen�rio de teste.
        void testarCenarioFalha();                      // Cen�rio de teste.

    public:
        const static int SUCESSO =  0;                  // Defini��o de constante para reportar resultado de teste.
        const static int FALHA   = -1;                  // Defini��o de constante para reportar resultado de teste.
        int run();                                      // M�todo para executar teste.
};

class TUNome{
    private:
        const string VALOR_VALIDO   = "Aluizio Ol Go Filho";    // Defini��o de constante para evitar n�mero m�gico.
        const string VALOR_INVALIDO = "Al�izio Oliveira Gon�alves Filho";    // Defini��o de constante para evitar n�mero m�gico.
        Nome *Nome;                                 // Refer�ncia para unidade em teste.
        int  estado;                                    // Estado do teste.
        void setUp();                                   // M�todo para criar unidade em teste.
        void tearDown();                                // M�todo para destruir unidade em teste.
        void testarCenarioSucesso();                    // Cen�rio de teste.
        void testarCenarioFalha();                      // Cen�rio de teste.

    public:
        const static int SUCESSO =  0;                  // Defini��o de constante para reportar resultado de teste.
        const static int FALHA   = -1;                  // Defini��o de constante para reportar resultado de teste.
        int run();
};


#endif // TESTE_H_INCLUDED
