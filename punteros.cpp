#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Andrex.h>
int main(){
    char *palabras[4];
    int cont;
    char salir;
    char aux[20];
    int longitud,veces;
    char *p_aux;
    //Leo cuatro palabras
    for(cont=0;cont<4;cont++){
                              std::cout<<"palabra: ";
                              std::cin>>aux;
                              longitud=devuelve_longitud(aux);
                              std::cout<<longitud;
                              std::cout<<"\n";
                              palabras[cont]=(char *) malloc((longitud+1)*sizeof(char));//Reserva
                              strcpy(palabras[cont],aux);
                              
    }
    std::cout<<"\nLISTA DE PALABRAS\n";
    for(cont=0;cont<4;cont++){
                              printf("%s\n",palabras[cont]);
    }
    //ORDENAMOS POR EL METODO DE LA BURBUJA
    for(veces=1;veces<4;veces++){
        for (cont=0;cont<3;cont++){
            if(strcmp(palabras[cont],palabras[cont+1])>0){
                                                          p_aux=palabras[cont];
                                                          palabras[cont]=palabras[cont+1];
                                                          palabras[cont+1]=p_aux;
                                                          }
                                                          }
                                                          }
    std::cout<<"\nLISTA DE PALABRAS ORDENADAS\n";
    for(cont=0;cont<4;cont++){
                              printf("%s\n",palabras[cont]);
    }
    
                              
    std::cin>>salir;
    
}
