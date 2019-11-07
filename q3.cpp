#include <iostream>
#include <map>
#include <ctype.h>
#include <iomanip>

using namespace std;

int main(){
   
   map<string,string>nomes;
   string sobrenome,teste;

   do{

       cout<<"Digite um sobrenome para continuar ou digite **sair** para finalizar o código: ";
       getline(cin,sobrenome);
      
       if(sobrenome == "sair"){
           break;
       }

       if(nomes.find(sobrenome)==nomes.end()){
           cout<<"Digite o nome da pessoa: ";
           getline(cin,nomes[sobrenome]);
       }else{
           cout<<"O sobrenome já foi cadastrado, deseja sobreescreve-lo?: "<<endl;
           cin>>teste;
           if(teste=="sim"){
               cout<<"Digite o novo nome: ";
               getline(cin,nomes[sobrenome]);
           }
       }
       cin.ignore();

   }while(sobrenome!="sair");

cout<<endl<<endl;

for(auto& elemento : nomes){
      cout<<elemento.first<<","<<elemento.second<<endl;
  }

    return 0;
}