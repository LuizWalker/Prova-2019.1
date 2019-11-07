#include "pj.h"
#include <fstream>

using namespace std;

void Pessoa_juridica::setCnpj(string cnj){
    if(cnj.size()<12){
        cnj="cnpj incorreto";
    }
    cnpj=cnj;
}

void Pessoa_juridica::setInscricao_estadual(string inscr){
    if(inscr.size()<9){
        inscr="inscricao_estadual incorreto";
    }
    inscricao_estadual=inscr;
}

void Pessoa_juridica::setNome_fantasia(string apelido){
    if(apelido.size()<8){
        apelido="Data de nascimento incorreta";
    }
    nome_fantasia=apelido;
}

string Pessoa_juridica::getCnpj(){
    return cnpj;
}

string Pessoa_juridica::getInscricao_estadual(){
    return inscricao_estadual;
}

string Pessoa_juridica::getNome_fantasia(){
    return nome_fantasia;
}

void Pessoa_juridica::coletaDados(){
    string temp1,temp2,temp3,temp4,temp5,temp6,temp7;

    cout<<"Digite o código do cliente: ";
    getline(cin,temp1);
    setCodigo(temp1);

    cout<<"Digite o nome do cliente: ";
    getline(cin,temp2);
    setNome(temp2);

    cout<<"Digite o telefone do cliente: ";
    getline(cin,temp3);
    setTelefone(temp3);

    cout<<"Digite o cep do cliente: ";
    getline(cin,temp4);
    setCep(temp4);

    cout<<"Digite o cnpj do cliente: ";
    getline(cin,temp5);
    setCnpj(temp5);


    cout<<"Digite o inscricao_estadual do cliente: ";
    getline(cin,temp6);
    setInscricao_estadual(temp6);

    cout<<"Digite o Nome fantasia do cliente: ";
    getline(cin,temp7);
    setNome_fantasia(temp7);

}

void Pessoa_juridica::jogaDados(){

    ofstream arquivo;

    arquivo.open("Pessoa_jurídica.txt",ios::app);

    arquivo<<codigo<<endl;
    arquivo<<nome<<endl;
    arquivo<<telefone<<endl;
    arquivo<<cep<<endl;
    arquivo<<cnpj<<endl;
    arquivo<<inscricao_estadual<<endl;
    arquivo<<nome_fantasia<<endl;

    arquivo.close();
}