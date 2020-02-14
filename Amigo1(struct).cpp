#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    struct Amigo{
           int n_amigo;
           float dinero;
           
    };
    int salir;
    Amigo pepito;//Guardo memoria para un dato de tipo amigo
    std::cout<<"Dime tu numero, pepito: ";std::cin>>pepito.n_amigo;
    std::cout<<"Dime cuanta pasta tienes: ";std::cin>>pepito.dinero;
    //Recupero los datos de mi Amigo pepito
    std::cout<<"Yo tengo un amigo que se llama Pepito";
    std::cout<<"\nPepito en mi amigo numero: "<<pepito.n_amigo;
    std::cout<<"\ny tiene "<<pepito.dinero<<" euros.";
    
    std::cin>>salir;
    
}
    
    
    
