#include <iostream>
#include "pf.h"
#include "pj.h"

int main(){

    cout<<"Você precisa cadastrar três pessoas físicas e três pessoas jurídicas"<<endl<<endl;
    int contador=0,contador_pf=0,contador_pj=0,op;

    do{

        if(contador_pf<3){
             
            cout<<"Pessoa física N°:"<<contador_pf+1<<endl;

            Pessoa_fisica pf;

            pf.coletaDados();
            pf.jogaDados();
            contador_pf++;
        }

        cout<<endl<<endl;

        if(contador_pj<3){

            cout<<"Pessoa jurídica N°:"<<contador_pj+1<<endl;

            Pessoa_juridica pj;

            pj.coletaDados();
            pj.jogaDados();
            contador_pj++;
        }

    contador=contador_pf+contador_pj;

    }while(contador<1);







    return 0;
}