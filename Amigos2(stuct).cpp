#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    int cont;
    struct Amigo{
           int n_amigo;
           float dinero;
           
    };
    int salir;
    
    Amigo misAmigos[3];//Guardo memoria para un dato de tipo amigo
    for(cont=0;cont<4;cont++){
                               std::cout<<"Dime tu numero"<<cont<<":";
                               std::cin>>misAmigos[cont].n_amigo;
                               std::cout<<"Dime cuanta pasta tienes: ";std::cin>>misAmigos[cont].dinero;
                               
    }
    //Recupero los datos de mi Amigo pepito
    for(cont=0;cont<4;cont++){
                                std::cout<<"\n Es mi amigo numero: "<<misAmigos[cont].n_amigo;
                                std::cout<<"\ny tiene "<<misAmigos[cont].dinero<<" euros.";                          
    }
    std::cin>>salir;
    
}
    
