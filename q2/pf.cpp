#include "pf.h"
#include <fstream>

using namespace std;

void Pessoa_fisica::setCpf(string cf){
    if(cf.size()<12){
        cf="cpf incorreto";
    }
    cpf=cf;
}

void Pessoa_fisica::setRg(string ident){
    if(ident.size()<9){
        ident="RG incorreto";
    }
    rg=ident;
}

void Pessoa_fisica::setData_de_nascimento(string aniversario){
    if(aniversario.size()<8){
        aniversario="Data de nascimento incorreta";
    }
    data_de_nascimento=aniversario;
}

string Pessoa_fisica::getCpf(){
    return cpf;
}

string Pessoa_fisica::getRg(){
    return rg;
}

string Pessoa_fisica::getData_de_nascimento(){
    return data_de_nascimento;
}

void Pessoa_fisica::coletaDados(){
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

    cout<<"Digite o CPF do cliente: ";
    getline(cin,temp5);
    setCpf(temp5);


    cout<<"Digite o RG do cliente: ";
    getline(cin,temp6);
    setRg(temp6);

    cout<<"Digite a Data de nascimento do cliente: ";
    getline(cin,temp7);
    setData_de_nascimento(temp7);

}

void Pessoa_fisica::jogaDados(){

    ofstream arquivo;

    arquivo.open("Pessoa_física.txt",ios::app);

    arquivo<<codigo<<endl;
    arquivo<<nome<<endl;
    arquivo<<telefone<<endl;
    arquivo<<cep<<endl;
    arquivo<<cpf<<endl;
    arquivo<<rg<<endl;
    arquivo<<data_de_nascimento<<endl;

    arquivo.close();
}