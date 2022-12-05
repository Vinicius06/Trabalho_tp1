#include <iostream>

#include "Dominios.h"
#include "Entidade.h"
#include "TesteDominios.h"
#include "TesteEntidade.h"

using namespace std;
/**
 * @brief Funcao main quando executada, cria e executa os testes de cada classe dominio e entidade retornando NOMEDACLASSE [SUCESSO/FALHA] de acordo com o resultado dos testes
 *
 * @return int
 */

int main()
{

    TUNome testeNome;
    TUMatricula testeMatricula;
    TUSenha testeSenha;

    TUTexto testeTexto;
    TUCodigo testeCodigo;

    TUData testeData;
    TUDisciplina testeDisciplina;

    /**
     * @brief Chamada de caso para teste de cada dominio e entidade
     *
     */

    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA   - NOME" << endl;
                                break;
    }

    switch(testeMatricula.run()){
        case TUMatricula::SUCESSO: cout << "SUCESSO - MATRICULA" << endl;
                                break;
        case TUMatricula::FALHA  : cout << "FALHA   - MATRICULA" << endl;
                                break;
    }

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA   - SENHA" << endl;
                                break;
    }

    switch(testeTexto.run()){
        case TUTexto::SUCESSO: cout << "SUCESSO - TEXTO" << endl;
                                break;
        case TUTexto::FALHA  : cout << "FALHA   -  TEXTO" << endl;
                                break;
    }

    switch(testeData.run()){
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   -  DATA" << endl;
                                break;
    }

    switch(testeDisciplina.run()){
        case TUDisciplina::SUCESSO: cout << "SUCESSO - DISCIPLINA" << endl;
                                break;
        case TUDisciplina::FALHA  : cout << "FALHA   -  DISCIPLINA" << endl;
                                break;
    }



    switch(testeCodigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }




    TUUsuario testeUsuario;
    TUProjeto testeProjeto;
    TUTarefa testeTarefa;


    switch(testeUsuario.run()){
        case TUUsuario::SUCESSO: cout << "SUCESSO - USUARIO" << endl;
                                break;
        case TUUsuario::FALHA  : cout << "FALHA   - USUARIO" << endl;
                                break;
    }


    switch(testeProjeto.run()){
        case TUProjeto::SUCESSO: cout << "SUCESSO - PROJETO" << endl;
                                break;
        case TUProjeto::FALHA  : cout << "FALHA   - PROJETO" << endl;
                                break;
    }

    switch(testeTarefa.run()){
        case TUTarefa::SUCESSO: cout << "SUCESSO - TAREFA" << endl;
                                break;
        case TUTarefa::FALHA  : cout << "FALHA   - TAREFA" << endl;
                                break;
    }

    return 0;
}
