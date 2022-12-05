#include "Dominios.h"
#include <regex>
#include <iostream>
#include <sstream>

using namespace std;

/**
 * @brief Verifica se o valor atribuido eh valido, segundo os requisitos;
 * Formato DDDDDDDDDDX
 * D eh digito (0-9).
 * X eh digito verificador calculado via modulo 11
 * @param codigo
 */

int Codigo::validar(string codigo){

    regex codigoFormat("[0-9]{11}");
    if(!regex_match(codigo, codigoFormat)){
        return 1;
    }

    int numDigitos = codigo.length();
    int soma = 0;
    int multi = 2;

    for(int i = numDigitos - 2; i >= 0; i--){
        int d = codigo[i]- '0';
        soma += d*multi;

        multi++;
    }

    int digitoverificador = soma*10%11;
    int digito = codigo[10] - '0';

    if(digitoverificador != digito){
            return 1;
        }
    return 0;
}

/**
 * @brief Valida o valor e se for valido atribui em codigo.
 *
 * @param codigo
 */

void Codigo::setCodigo(string codigo){
    switch(validar(codigo)){
        case 1:
            throw invalid_argument("Digito invalido");
    }
    this->codigo = codigo;
}

/**
 * @brief Verifica se o valor atribuido eh valido, segundo as requisicoes;
 * Nome eh composto por prenome e ate dois sobrenomes.
 * Texto (prenome mais sobrenomes e espaços em branco) eh composto por total de ate 20 caracteres.
 * Cada caractere eh letra (A-Z a-z) ou espaco em branco.
 * Primeira letra de prenome ou de sobrenome é maiuscula (A-Z) e as outras sao minusculas (a-z).
 * Nao ha espacos em branco em sequencia.
 * Acentuacao pode ser desconsiderada.
 * @param nome
 */

int Nome::validar(string nome){
    regex nomeFormat("[A-Z]{1}[a-z]+ [A-Z]{1}[a-z]+");
    regex nomeFormat2("[A-Z]{1}[a-z]+ [A-Z]{1}[a-z]+ [A-Z]{1}[a-z]+");

    if((!regex_match(nome, nomeFormat) && !regex_match(nome, nomeFormat2))|| nome.length() > 20){
        return 1;
    }
    return 0;
}

/**
 * @brief Valida o valor e se for valido atribui em nome.
 *
 * @param nome
 */

void Nome::setNome(string nome){
    switch(validar(nome)){
        case 1:
            throw invalid_argument("Nome invalido, maximo 20 caracteres e sem espacos duplos ou acentuacoes!");
    }
    this->nome = nome;
}


/**
 * @brief Verifica se o valor atribuido eh valido, segundo os requisicoes;
 * Formato LLLLDDDD
 * L eh letra maiuscula (A-Z).
 * D eh digito (0-9).
 * @param matricula
 */

int Matricula::validar(string matricula){
    regex matriculaFormat("[A-Z]{4}[0-9]{4}");

    if(!regex_match(matricula, matriculaFormat)|| matricula.length() > 8 ){
        return 1;
    }

    return 0;
}

/**
 * @brief Valida o valor e se for valido atribui em matricula.
 *
 * @param matricula
 */

void Matricula::setMatricula(string matricula){
    switch(validar(matricula)){
        case 1:
            throw invalid_argument("Matricula invalida, formato de ate 8 letras e numeros!");
    }
    this->matricula = matricula;
}



/**
 * @brief Verifica se o valor atribuido eh valido, segundo os requisicoes;
 * Formato XXXXXX
 * Cada caractere X eh letra maiuscula (A-Z) ou digito (0-9)
 * Nao pode haver caractere duplicado
 * Existem pelo menos duas letras maiusculas e dois digitos
 * @param senha
 */

int Senha::validar(string senha){
    int contador, tamanho, contador2;
    contador = 0;
    contador2 = 0;
    regex upper("[A-Z]");
    regex digit("[0-9]");
    regex lower("[a-z]");

    tamanho = senha.length();

    while(contador != 6){
        if (isdigit(senha[contador])){
            contador2++;
            contador++;
        } else{
            contador++;
        }
    }

    contador = 0;

    if (tamanho == 6 && regex_search(senha, upper) && regex_search(senha, digit)){

        while (contador != 6){
            if (senha[contador] == senha[contador+1] || regex_search(senha, lower) || contador2 < 2 || contador2 > 4){
                return 1;
            } else{
                contador++;
            };
        };
    }else {
        return 1;
    }

    return 0;

}

/**
 * @brief Valida o valor e se for valido atribui em senha.
 *
 * @param senha
 */

void Senha::setSenha(string senha){
    switch(validar(senha)){
        case 1:
            throw invalid_argument("Senha invalida, maximo 6 caracteres e sendo nao duplicados!");
    }
    this->senha = senha;
}



/**
 * @brief Verifica se o valor atribuido eh valido, segundo os requisicoes;
 * 10 a 40 caracteres.
 * Cada caractere X eh letra (A-Z ou a-z), digito (0-9) ou sinal de pontuacao ( . , ; ? ! : - ).
 * Nao ha espaços em branco em sequencia.
 * Nao ha sinal de pontuaçao (. , ; : ? ! -) em sequencia.
 * Acentuacao pode ser desconsiderada.
 * @param texto
 */

 int Texto::validar(string texto){
    regex simbolosDuplos ("[.|,|;|:|?|!|-| ]{2}");
    if (regex_search(texto, simbolosDuplos) || texto.length() > 40 || texto.length() < 10){
        return 1;
    }

    return 0;
 }

/**
 * @brief Valida o valor e se for valido atribui em texto.
 *
 * @param texto
 */

 void Texto::setTexto(string texto){
    switch(validar(texto)){
        case 1:
            throw invalid_argument("Texto invalido, nao incluindo os requisitos necessarios!");
    }

    this->texto = texto;
}


/**
 * @brief Verifica se o valor atribuido eh valido, segundo os requisicoes;
 * Formato DD-MES-ANO.
 * DD - 01 a 31.
 * MES - 01 a 12.
 * ANO - 00 a 99.
 * Deve ser levado em consideracao se ano eh ou nao eh bissexto.
 * @param data
 */

 //
int Data::validar(string data){
    string dd = "(0[1-9]|[1-2][0-9]|3[0-1])";
    string mm = "(0[1-9]|[1][0-2])";
    string aa = "([0-9]{2})";
    regex stile_data(dd+"\\-"+mm+"\\-"+aa);
    bool data_valida = regex_match(data, stile_data);
    if(data_valida){
        int dia = stoi(data.substr(0, 2));
        int mes = stoi(data.substr(3, 2));
        int ano = stoi(data.substr(6, 4));
        int mesescom31[] = {1, 3, 5, 7, 8, 10, 12};
        int max = 30;
        if(mes == 2)
            max = (ano % 4 == 0)? 29 : 28;
        else{
            for(auto & mes31 : mesescom31){
                if(mes == mes31)
                    max = 31;
            }
        }

        if(dia > max)
            data_valida = false;
    }

    if(!data_valida){
        return 1;
    }
    return 0;
}



/**
 * @brief Valida o valor e se for valido atribui em data.
 *
 * @param data
 */

void Data::setData(string data){
    switch(validar(data)){
        case 1:
            throw invalid_argument("Data invalido, nao incluindo os requisitos necessarios!");
    }
    this->data = data;
}


/**
 * @brief Verifica se o valor atribuido eh valido, segundo os requisicoes;
 * Arquitetura, Desenvolvimento, Gerenciamento, Implantacao, Requisitos, Teste.
 * @param disciplina
 */

int Disciplina::validar(string disciplina){

    vector<string> disciplinas{"Arquitetura", "Desenvolvimento", "Gerenciamento", "Implantacao", "Requisitos", "Teste"};

    if (!(*find(disciplinas.begin(), disciplinas.end(), disciplina) == disciplina)){
        return 1;
    }

    return 0;
}

/**
 * @brief Valida o valor e se for valido atribui em data.
 *
 * @param disciplina
 */

void Disciplina::setDisciplina(string disciplina){
    switch(validar(disciplina)){
        case 1:
            throw invalid_argument("Disciplina invalida, nao incluindo os requisitos necessarios!");
    }
    this->disciplina = disciplina;
}
