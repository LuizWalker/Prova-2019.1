#include "cliente.h"

using namespace std;

Cliente::Cliente(){

}

void Cliente::setCodigo(string cod){
    if(cod.size()<7){
        cod = "Código incorreto";
    }
    codigo = cod;
}

void Cliente::setNome(string name){
    
    if(name.size()<2){
        name = "Nome ilégivel";
    }
    nome = name;   
}

void Cliente::setTelefone(string tel){
    if(tel.size()<9){
        tel="Telefone incorreto";
    }
    telefone=tel;
}

void Cliente::setCep(string cp){
    if(cp.size()<9){
        cp="Cep incorreto";
    }
    cep=cp;
}

string Cliente::getCodigo(){
    return codigo;
}

string Cliente::getNome(){
    return nome;
}

string Cliente::getTelefone(){
    return telefone;
}

string Cliente::getCep(){
    return cep;
}

