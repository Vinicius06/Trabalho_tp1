#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <stdexcept>

using namespace std;



/**
*
*   @brief DECLARACAO DA CLASSE CODIGO COM ATRIBUTOS E METODOS
*
*/

class Codigo{
    private:
        /**
        * @brief Variavel que armazena o texto do codigo
        */
        string codigo;
        /**
        * @brief Valida string codigo
        * @return 0 para correto
        * @return 1 para errado
        */
        int validar(string codigo);

    public:
        void setCodigo(string codigo);
        string getCodigo() const;
};

/**
 * @brief metodo inline que retorna a string atribuida a Codigo.
 *
 * @return string
 */

inline string Codigo::getCodigo() const{
    return codigo;
}


/**
*
*   @brief DECLARACAO DA CLASSE NOME COM ATRIBUTOS E METODOS
*
*/

class Nome{
    private:
        string nome;
        int validar(string nome);
    public:
        void setNome(string nome);
        string getNome() const;
};

/**
 * @brief metodo inline que retorna a string atribuida a Nome.
 *
 * @return string
 */

inline string Nome::getNome() const{
    return nome;
}


/**
*
*   @brief DECLARACAO DA CLASSE MATRICULA COM ATRIBUTOS E METODOS
*
*/

class Matricula{
    private:
        string matricula;
        int validar(string matricula);

    public:
        void setMatricula(string matricula);
        string getMatricula() const;

};

/**
 * @brief metodo inline que retorna a string atribuida a Matricula.
 *
 * @return string
 */

inline string Matricula::getMatricula() const{
    return matricula;
}



/**
*
*   @brief DECLARACAO DA CLASSE SENHA COM ATRIBUTOS E METODOS
*
*/

class Senha{
    private:
        string senha;
        int validar(string senha);

    public:
        void setSenha(string senha);
        string getSenha() const;

};

/**
 * @brief metodo inline que retorna a string atribuida a Senha.
 *
 * @return string
 */

inline string Senha::getSenha() const{
    return senha;
}



/**
*
*   @brief DECLARACAO DA CLASSE TEXTO COM ATRIBUTOS E METODOS
*
*/

class Texto{
    private:
        string texto;
        int validar(string texto);

    public:
        void setTexto(string texto);
        string getTexto() const;

};

/**
 * @brief metodo inline que retorna a string atribuida a Texto.
 *
 * @return string
 */

 inline string Texto::getTexto() const{
    return texto;
}



/**
*
*   @brief DECLARACAO DA CLASSE DATA COM ATRIBUTOS E METODOS
*
*/

class Data {
    private:
    string data;
    int validar(string data);
    public:
    /**
    * Armazena a data
    *
    * Lanca excecao caso a data informada seja invalida.
    *
    * @param data eh uma string no formato dd-mm-aa
    *
    * @throw invalid_argument
    */

    void setData(string data);
    /**
    * Retorna data
    *
    * @return a string data
    */
    string getData();
};

inline string Data::getData(){
    return data;
}




/**
*
*   @brief DECLARACAO DA CLASSE DATA COM ATRIBUTOS E METODOS
*
*/

class Disciplina{
    private:
        string disciplina;
        int validar(string disciplina);

    public:
        void setDisciplina(string disciplina);
        string getDisciplina() const;
};

/**
 * @brief metodo inline que retorna a string atribuida a Data.
 *
 * @return string
 */

 inline string Disciplina::getDisciplina() const{
    return disciplina;
}


#endif
