#include "cliente.h"
#include <iostream>
#include <fstream>

class Pessoa_fisica : public Cliente{
     
     protected:

     string cpf;
     string rg;
     string data_de_nascimento;

     public:

     void setCpf(string cf);
     void setRg(string ident);
     void setData_de_nascimento(string aniversario);

     string getCpf();
     string getRg();
     string getData_de_nascimento();

     void coletaDados();
     void jogaDados();    

};