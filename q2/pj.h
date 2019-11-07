#include "cliente.h"
#include <iostream>
#include <fstream>

class Pessoa_juridica : public Cliente{
     
     protected:

     string cnpj;
     string inscricao_estadual;
     string nome_fantasia;

     public:

     void setCnpj(string cnj);
     void setInscricao_estadual(string inscr);
     void setNome_fantasia(string apelido);

     string getCnpj();
     string getInscricao_estadual();
     string getNome_fantasia();

     void coletaDados();
     void jogaDados();    

};