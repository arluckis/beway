#ifndef TRIP_HPP
#define TRIP_HPP

#include <iostream>          // Inicializador do programa em C++
#include <vector>            // Incluir a biblioteca vetor, para poder utilizar vetores durante a programação
#include "city.hpp"          // Pegar informações referente a um arquivo chamado de city.hpp que possui definido a variável City(Cidade)
#include "transporte.hpp"    // Pegar informações referente a um arquivo chamado de transport.hpp que possui definido a variável Transport(Transporte)
#include "passageiro.hpp"    // Pegar informações referente a um arquivo chamado de passenger.hpp que possui definido a variável Passenger(Passageiro)
// #include "estado_viagem.hpp" // Verificar se o estado da viagem virá de um outro arquivo ou neste!!!!!
using namespace std;         // Isenta o uso do std durante o seguinte programa

class Trip { //Definindo a classe Trip(Viagem)
private:
  Transport* transportOfTrip; 
  city* origin;
  city* destiny;
  trip* next;
  int timeInTraffic;
  bool inProgress;

Public:
  // Definindo o construtor para Trip
  Trip(Transport* transport, City* origin_, City* destinyCity)


  // Metodo utilizado para dar início a uma viagem
  void beginTrip() {
  
  }

  void advanceHour() {
    
  }

  void showStatus() {
    
  }

  // Retorna a variável inProgress que irá definir se a viagem está em progresso ou não
  bool isInProgress() const {
    return inProgress;
  }

};

#endif // VIAGEM_HPP
