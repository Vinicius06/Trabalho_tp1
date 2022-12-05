#ifndef ENTIDADE_H_INCLUDED
#define ENTIDADE_H_INCLUDED

#include "Dominios.h"
#include <string>

using namespace std;

/**
 * @brief Classe Usuario
 * Classe de Entidade Usuario contem atributos: Nome (dominio nome).
 */

class Usuario{
    private:
        Nome nome;
        Matricula matricula;
        Senha senha;

    public:
        /**
         * @brief Set the Nome object
         *
         * @param Nome
         */

        void setNome(const Nome&);
        /**
         * @brief Set the Matricula object
         *
         * @param Matricula
         */

        void setMatricula(const Matricula&);
        /**
         * @brief Set the Senha object
         *
         * @param Senha
         */

        void setSenha(const Senha&);

        /**
         * @brief Get the Nome object
         *
         * @return Nome
         */
        Nome getNome() const;
        /**
         * @brief Get the Matricula object
         *
         * @return Matricula
         */

        Matricula getMatricula() const;
        /**
         * @brief Get the Senha object
         *
         * @return Senha
         */

        Senha getSenha() const;

};

/**
 * @brief Valida e se for valido atribui o valor ao nome do projeto.
 *
 * @param nome
 */

inline void Usuario::setNome(const Nome& nome){
    this->nome = nome;
}

/**
 * @brief Retorna o valor do nome do projeto.
 *
 * @return Nome
 */

inline Nome Usuario::getNome() const {
    return nome;
}



/**
 * @brief Valida e se for valido atribui o valor ao matricula do projeto.
 *
 * @param matricula
 */

inline void Usuario::setMatricula(const Matricula& matricula){
    this->matricula = matricula;
}

/**
 * @brief Retorna o valor do matricula do projeto.
 *
 * @return Matricula
 */

inline Matricula Usuario::getMatricula() const {
    return matricula;
}



/**
 * @brief Valida e se for valido atribui o valor ao senha do projeto.
 *
 * @param senha
 */

inline void Usuario::setSenha(const Senha& senha){
    this->senha = senha;
}

/**
 * @brief Retorna o valor do senha do projeto.
 *
 * @return Senha
 */

inline Senha Usuario::getSenha() const {
    return senha;
}



/**
 * @brief Classe Projeto
 * Classe de Entidade Projeto contém atributos: Codigo (dominio codigo).
 */

class Projeto{
    private:
        Codigo codigo;
        Texto nome;
        Texto descricao;
    public:
        /**
         * @brief Set the Codigo object
         *
         * @param codigo
         */
        void setCodigo(const Codigo&);
        /**
         * @brief Get the Codigo object
         *
         * @return retorna instancia do tipo Codigo armazenado na entidade Projeto
         */

        Codigo getCodigo() const;
        /**
         * @brief Set the Nome object
         *
         * @param nome
         */

        void setNome(const Texto&);
        /**
         * @brief Get the Nome object
         *
         * @return retorna instancia do tipo Texto armazenado na entidade Projeto
         */

        Texto getNome() const;
        /**
         * @brief Set the Descricao object
         *
         * @param descricao eh um texto de 10 a 40 caracteres
         */

        void setDescricao(const Texto&);
        /**
         * @brief Get the Descricao object
         *
         * @return retorna instancia do tipo Texto armazenado na entidade Projeto
         */

        Texto getDescricao() const;

};

/**
 * @brief Valida e se for valido atribui o valor ao codigo do projeto.
 *
 * @param codigo instancia da classe codigo
 */

inline void Projeto::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}
/**
 * @brief Retorna o valor do codigo do projeto.
 *
 * @return Codigo
 */

inline Codigo Projeto::getCodigo() const {
    return codigo;
}


/**
 * @brief Valida e se for valido atribui o valor ao codigo do projeto.
 *
 * @param texto
 */

inline void Projeto::setNome(const Texto& nome){
    this->nome = nome;
}

/**
 * @brief Retorna o valor do codigo do projeto.
 *
 * @return Texto
 */

 inline Texto Projeto::getNome() const {
    return nome;
}


/**
 * @brief Valida e se for valido atribui o valor ao codigo do projeto.
 *
 * @param descricao instancia do tipo Texto
 */

 inline void Projeto::setDescricao(const Texto& descricao){
    this->descricao = descricao;
}

 /**
 * @brief Retorna o valor do codigo do projeto.
 *
 * @return Texto
 */

 inline Texto Projeto::getDescricao() const {
    return descricao;
}


class Tarefa{
    private:
        Texto nome;
        Codigo codigo;
        Data inicio;
        Data termino;
        Disciplina disciplina;

    public:
        /**
         * @brief Set the Nome object
         *
         * @param Texto
         */
        void setNome(const Texto&);
        /**
         * @brief Get the Nome object
         *
         * @return Texto
         */
        Texto getNome() const;


        /**
         * @brief Set the Codigo object
         *
         * @param Codigo
         */
        void setCodigo(const Codigo&);
        /**
         * @brief Get the Codigo object
         *
         * @return Codigo
         */
        Codigo getCodigo() const;

        /**
         * @brief Set the Inicio object
         *
         * @param Data
         */
        void setInicio(const Data&);
        /**
         * @brief Get the Inicio object
         *
         * @return Data
         */
        Data getInicio() const;

        /**
         * @brief Set the Termino object
         *
         * @param Data
         */
        void setTermino(const Data&);
        /**
         * @brief Get the Termino object
         *
         * @return Data
         */
        Data getTermino() const;

        /**
         * @brief Set the Disciplina object
         *
         * @param Disciplina
         */
        void setDisciplina(const Disciplina&);
        /**
         * @brief Get the Disciplina object
         *
         * @return Disciplina
         */
        Disciplina getDisciplina() const;

};

/**
 * @brief Valida e se for valido atribui o valor ao codigo do tarefa.
 *
 * @param nome
 */

inline void Tarefa::setNome(const Texto& nome){
    this->nome = nome;
}

/**
 * @brief Retorna o valor do codigo do tarefa.
 *
 * @return Nome
 */

 inline Texto Tarefa::getNome() const {
    return nome;
}


/**
 * @brief Valida e se for valido atribui o valor ao codigo do tarefa.
 *
 * @param codigo
 */

inline void Tarefa::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}
/**
 * @brief Retorna o valor do codigo do tarefa.
 *
 * @return Codigo
 */

inline Codigo Tarefa::getCodigo() const {
    return codigo;
}



/**
 * @brief Valida e se for valido atribui o valor ao codigo do tarefa.
 *
 * @param inicio
 */

inline void Tarefa::setInicio(const Data& inicio){
    this->inicio = inicio;
 }

 /**
 * @brief Retorna o valor do codigo do tarefa.
 *
 * @return inicio
 */

inline Data Tarefa::getInicio() const{
    return inicio;
}


/**
 * @brief Valida e se for valido atribui o valor ao codigo do tarefa.
 *
 * @param termino
 */

inline void Tarefa::setTermino(const Data& termino){
    this->termino = termino;
 }

 /**
 * @brief Retorna o valor do codigo do tarefa.
 *
 * @return termino
 */

inline Data Tarefa::getTermino() const{
    return termino;
}


/**
 * @brief Valida e se for valido atribui o valor ao codigo do tarefa.
 *
 * @param disciplina
 */

inline void Tarefa::setDisciplina(const Disciplina& disciplina){
    this->disciplina = disciplina;
}
/**
 * @brief Retorna o valor do codigo do tarefa.
 *
 * @return disciplina
 */

inline Disciplina Tarefa::getDisciplina() const {
    return disciplina;
}

#endif // ENTIDADE_H_INCLUDED
