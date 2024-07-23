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
  void cadastreCity(std::string name);
  void cadastreRoute(std::string nameOrigin, std::string nameDestiny, char type, int distance);
  void cadastreTransport(std::string name, char type, int capacity, int speed, int distance_between_rests, int timeOfRest, std::string currentLocation);
  void cadastrePassenger(std::string name, std::string passengerCurrentCity);
  void beginTrip(std::string nameTransport, std::vector<std::string> nomesPassengers, std::string nameOrigin, std::string nameDestiny);
  void avanceHour(int hours);
  void relateState();

  // função para relatar tudo que foi cadastrado no sistema (Cidades, Rotas, Transportes, passageiros e viagens em andamento)
  void relateState() {
    std::cout << "Current System State" << std::endl; // Título da relação de estado
    std::cout << "Cadastred Cities" << std::endl;
    for (auto city : cities) {
      std::cout << "* " << city->getName() << std::endl;
    }
    std::cout << "Cadastred Routes" << std::endl;
    for (auto route : routes) {
      std::cout << "- De " << route->getOrigin() << " para " << route->getDestiny() 
    }
    std::cout << "Cadastred Transports" << std::endl;
    std::cout << "Cadastred Passengers" << std::endl;

    
  }
}

#endif // TRAFFICCONTROLER_HPP
