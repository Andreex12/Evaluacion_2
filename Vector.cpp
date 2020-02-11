#include<iostream>
/*Vamos a hacer un prograqma que nos pida 4 numeros y los guarde para calcularla media*/


int main(){
    //Definicion de variables
    char salir;
    int num[4];
    int cont;
    int suma_numeros;
    //Introducimos los numeros en el vector
    for(cont=0;cont<=3;cont++){
          std::cout<<"Introduce el numero: ";
          std::cin>>num[cont];
    }
    //Sacamos los numero guardados
    std::cout<<"Has metido los siguienetes numeros: \n";
    for(cont=0;cont<=3;cont++){
       std::cout<<num[cont];
       std::cout<<"\n";
    }
    //Calculamos la media
    std::cout<<"La media es: \n";
    suma_numeros=0;
    for(cont=0;cont<=3;cont++){
                               suma_numeros=suma_numeros+num[cont];
    }
    std::cout<<"La suma vale: ";                       
    std::cout<<suma_numeros;
    media=suma_numero/4;
    
                                                      
    std::cin>>salir;
    
}
    
