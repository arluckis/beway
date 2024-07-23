#ifndef TRAFFICCONTROLER_HPP
#define TRAFFICCONTROLER_HPP

#include <iostream>          // Inicializador do programa em C++
#include <vector>            // Incluir a biblioteca vetor, para poder utilizar vetores durante a programação
#include <string>            // Incluir a biblioteca string
#include "city.hpp"          // Pegar informações referente a um arquivo chamado de city.hpp que possui definido a variável City(Cidade)
#include "route.hpp"         // Pegar informações referente a um arquivo chamado de route.hpp que possui definido a variável Route(rotas)
#include "transporte.hpp"    // Pegar informações referente a um arquivo chamado de transport.hpp que possui definido a variável Transport(Transporte)
#include "passageiro.hpp"    // Pegar informações referente a um arquivo chamado de passenger.hpp que possui definido a variável Passenger(Passageiro)
#include "passageiro.hpp"    // Pegar informações referente a um arquivo chamado de trip.hpp que possui definido a variável Trip(Viagem)

using namespace std;         // Isenta o uso do std durante o programa

class TrafficControler {
private:
  std::vector <City*> cities;
  std::vector <Route*> routes;
  std::vector <Transport*> transports;
  std::vector <Passenger*> passengers;
  std::vector <Trip*> trips;

public:
  void cadastreCity(std::string)

}
