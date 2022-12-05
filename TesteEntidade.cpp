#include "TesteEntidade.h"

/**
 * @brief Metodo para setar as necessidades de teste 1) Criacao de instancia usuario e 2) definicao de estado base como sucesso.
 */

void TUUsuario::setUp(){
    usuario = new Usuario();
    estado = SUCESSO;
}

/**
 * @brief Metodo para deletar a instancia criada para teste.
 */

void TUUsuario::tearDown(){
    delete usuario;
}

/**
 * @brief Metodo que efetivamente testa a atribuicao dos valores como atributos (dominios) da entidade e retorna caso de SUCESSO ou FALHA de acordo com
 * a realizacao dos testes.
 */

void TUUsuario::testarCenarioSucesso(){
    Nome nome;
    Matricula matricula;
    Senha senha;

    nome.setNome(VALOR_VALIDO_NOME);
    matricula.setMatricula(VALOR_VALIDO_MATRICULA);
    senha.setSenha(VALOR_VALIDO_SENHA);

    usuario->setNome(nome);
    usuario->setMatricula(matricula);
    usuario->setSenha(senha);

    if(usuario->getNome().getNome() != VALOR_VALIDO_NOME){
        estado = FALHA;
    }

    if(usuario->getMatricula().getMatricula() != VALOR_VALIDO_MATRICULA){
        estado = FALHA;
    }

    if(usuario->getSenha().getSenha() != VALOR_VALIDO_SENHA){
        estado = FALHA;
    }
}

/**
 * @brief Metodo que roda os outros metodos criados para realizacao do teste
 *
 * @return int (referente ao estado SUCESSO/FALHA do teste)
 */

int TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


/**
 * @brief Metodo para setar as necessidades de teste 1) Criacao de instancia usuario e 2) definicao de estado base como sucesso.
 */

void TUProjeto::setUp(){
    projeto = new Projeto();
    estado = SUCESSO;
}

/**
 * @brief Metodo para deletar a instancia criada para teste.
 */

void TUProjeto::tearDown(){
    delete projeto;
}

/**
 * @brief Metodo que efetivamente testa a atribuicao dos valores como atributos (dominios) da entidade e retorna caso de SUCESSO ou FALHA de acordo com
 * a realizacao dos testes.
 */

void TUProjeto::testarCenarioSucesso(){
    Texto nome;
    Codigo codigo;
    Texto descricao;

    nome.setTexto(VALOR_VALIDO_TNOME);
    codigo.setCodigo(VALOR_VALIDO);
    descricao.setTexto(VALOR_VALIDO_TDESCRICAO);

    projeto->setNome(nome);
    projeto->setCodigo(codigo);
    projeto->setDescricao(descricao);

    if(projeto->getNome().getTexto() != VALOR_VALIDO_TNOME){
        estado = FALHA;
    }

    if(projeto->getCodigo().getCodigo() != VALOR_VALIDO){
        estado = FALHA;
    }

    if(projeto->getDescricao().getTexto() != VALOR_VALIDO_TDESCRICAO){
        estado = FALHA;
    }
}

/**
 * @brief Metodo que roda os outros metodos criados para realizacao do teste
 *
 * @return int (referente ao estado SUCESSO/FALHA do teste)
 */

int TUProjeto::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

/**
 * @brief Metodo para setar as necessidades de teste 1) Criacao de instancia usuario e 2) definicao de estado base como sucesso.
 */

void TUTarefa::setUp(){
    tarefa = new Tarefa();
    estado = SUCESSO;
}

/**
 * @brief Metodo para deletar a instancia criada para teste.
 */

void TUTarefa::tearDown(){
    delete tarefa;
}

/**
 * @brief Metodo que efetivamente testa a atribuicao dos valores como atributos (dominios) da entidade e retorna caso de SUCESSO ou FALHA de acordo com
 * a realizacao dos testes.
 */

void TUTarefa::testarCenarioSucesso(){
    Texto nome;
    Codigo codigo;
    Data inicio;
    Data termino;
    Disciplina disciplina;

    nome.setTexto(VALOR_VALIDO_TNOME);
    codigo.setCodigo(VALOR_VALIDO);
    inicio.setData(VALOR_VALIDO_IDATA);
    termino.setData(VALOR_VALIDO_TDATA);
    disciplina.setDisciplina(VALOR_VALIDO_DISCIPLINA);

    tarefa->setNome(nome);
    tarefa->setCodigo(codigo);
    tarefa->setInicio(inicio);
    tarefa->setTermino(termino);
    tarefa->setDisciplina(disciplina);

    if(tarefa->getNome().getTexto() != VALOR_VALIDO_TNOME){
        estado = FALHA;
    }

    if(tarefa->getCodigo().getCodigo() != VALOR_VALIDO){
        estado = FALHA;
    }

    if(tarefa->getInicio().getData() != VALOR_VALIDO_IDATA){
        estado = FALHA;
    }

    if(tarefa->getTermino().getData() != VALOR_VALIDO_TDATA){
        estado = FALHA;
    }

    if(tarefa->getDisciplina().getDisciplina() != VALOR_VALIDO_DISCIPLINA){
        estado = FALHA;
    }

}

/**
 * @brief Metodo que roda os outros metodos criados para realizacao do teste
 *
 * @return int (referente ao estado SUCESSO/FALHA do teste)
 */

int TUTarefa::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
