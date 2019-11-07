#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int>numbers;
    int num,tam=0;
    float med=0,soma=0,mediana=0,tmed=0,tmed2=0; //tmed e tmed2 existem para auxiliar na conta da mediana
    string op;
    

    do{
        cout<<"Digite um número: ";
        cin>>num;
        numbers.push_back(num);
        /*cout<<"Quer continuar digitando números?(s/n): ";    // fica a critério seu, utilizar o "op" como condição para o while ou usar a propria variável "num",digite um não inteiro para sair do laço, no segundo caso o número sempre estará no vetor
        cin>>op;*/
    }while(/*op!="n"*/ num);

    sort(numbers.begin(),numbers.end()); //ordenar os indices dos vetores,do menor pro maior

    cout<<endl;

    for(auto& elementos : numbers){
         cout<<elementos<<endl;        //printar na tela o vetor já ordenado
         soma+=elementos;              //soma de cada índice do vetor para o cálculo da méd. dos valores 
    }

    med=soma/numbers.size();           // méd. dos valores
    tam=numbers.size();                // tamanho do vetor, auxilia no cálculo da mediana

    if((numbers.size()%2) == 0){               // cálculo da mediana para vetores de tamanho par
       tmed = numbers[numbers.size()/2];
       tmed2 = numbers[(numbers.size()/2)-1];
       mediana= (tmed+tmed2)/2;
    }
    if((numbers.size()%2) != 0){              // cálculo da mediana para vetores de tamanho ímpar
        mediana = numbers[numbers.size()/2];
    }

   

    cout<<"A media dos valores é: "<<med<<endl;
    cout<<"A mediana dos valores é: "<<mediana<<endl;
    cout<<"O tamanho do vector é: "<<tam<<endl;
    return 0;
}