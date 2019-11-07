#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool ordenar(string a, string b){

    return a.size()<b.size();
}

int main(){
     
    vector<string>nomes;
    string name;
    int contador=0;

    do{
       cout<<"Digite um nome: ";
       getline(cin,name);

       nomes.push_back(name);

    contador++;
    }while(contador<3);

    sort(nomes.begin(),nomes.end(),ordenar);

    if(nomes[0].size() != nomes[nomes.size()-1].size()){
       
       cout<<"O menor nome é: "<<nomes[0]<<endl;
       cout<<"O maior nome é: "<<nomes[nomes.size()-1]<<endl;
    }else{
        cout<<"Os nomes tem o mesmo tamanho!!"<<endl;
        for(auto elemento : nomes){
            cout<<elemento<<endl;
        }
    }

    return 0;
}