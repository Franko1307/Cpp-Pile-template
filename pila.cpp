#include <iostream>
#include "pila.h"
#include <string>
//Ejemplos de uso de las pilas .
int main() {
  pila<std::string> pila_de_cadenas;
  pila_de_cadenas.agregar("gonzalez");
  pila_de_cadenas.agregar("cordova");
  pila_de_cadenas.agregar("enrique");
  pila_de_cadenas.agregar("francisco");
  pila_de_cadenas.pintar();
  std::cout << "-----------------" << std::endl;
  pila<size_t> pila_de_size_t;
  pila_de_size_t.agregar(5);
  pila_de_size_t.agregar(20,50);
  pila_de_size_t.agregar(6);
  pila_de_size_t.agregar(7);
  pila_de_size_t.pintar();
  std::cout << "------------------" << std::endl;
  pila<int> pila_int;
  for (size_t i = 0; i < 10; i++) {
    pila_int.agregar(i);
  }
  pila_int.pintar();
  while(pila_int.obtener_cantidad()>0) std::cout << pila_int.quitar() << std::endl;
  std::cout << "---------------------" << std::endl;
  pila<std::string,std::string> pila_doble_cadenas;
  pila_doble_cadenas.agregar("Francisco", "Cordova");
  pila_doble_cadenas.agregar("Enrique", "Gonzalez");
  pila_doble_cadenas.agregar("Francisco Enrique Cordova Gonzalez");
  pila_doble_cadenas.pintar();
  std::cout << "-------------------------------" << std::endl;
  pila<double,std::string> pila_mixta;
  pila_mixta.agregar(10.5, "francisco");
  pila_mixta.agregar(10);
  pila_mixta.pintar();
}
