#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <fstream>

using namespace std;

class Cliente{

    protected:

    string codigo;
    string nome;
    string telefone;
    string cep;

    public:
    
    Cliente();

    void setCodigo(string cod);
    void setNome(string name);
    void setTelefone(string tel);
    void setCep(string cp);

    string getCodigo();
    string getNome();
    string getTelefone();
    string getCep();

    
};


#endif