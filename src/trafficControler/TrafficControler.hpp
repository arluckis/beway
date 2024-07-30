#ifndef trafficcontroler_hpp
#define trafficcontroler_hpp

#include <iostream>          // Inicializador do programa em C++
#include <vector>            // Incluir a biblioteca vetor, para poder utilizar vetores durante a programação
#include <string>            // Incluir a biblioteca string, para a criação e manipulação de cadeia de caracteres
#include <algorithm>         // Incluir a biblioteca algorithm, para fornecer uma série de algoritmos genéricos e funções de utilidade para operações comuns
#include "../city/city.hpp"          // Pegar informações referente a um arquivo chamado de city.hpp que possui definido a variável City(Cidade)
#include "../route/route.hpp"         // Pegar informações referente a um arquivo chamado de route.hpp que possui definido a variável Route(rotas)
#include "../transport/transport.hpp"    // Pegar informações referente a um arquivo chamado de transport.hpp que possui definido a variável Transport(Transporte)
#include "../passenger/passenger.hpp"    // Pegar informações referente a um arquivo chamado de passenger.hpp que possui definido a variável Passenger(Passageiro)
#include "../trip/trip.hpp"    // Pegar informações referente a um arquivo chamado de trip.hpp que possui definido a variável Trip(Viagem)

using namespace std;         // Isenta o uso do std durante o programa

class TrafficControler {
private:
  std::vector <City*> cities;
  std::vector <Route*> routes;
  std::vector <Transport*> transports;
  std::vector <Passenger*> passengers;
  std::vector <Trip*> trips;

// Função para procurar se o nome da cidade existe no ponteiro city, caso não encontre retorna "não encontrado"
City* findCityByName(const string& name) const{
  for (City* city : cities) {
    if (city->getName() == name) {
      return city;
    }
  }
  return nullptr;
}

// Função para procurar uma rota direta ou indireta, caso não encontre retorna "não encontrado"
Route* findRouteByCities(City* origin, city* destination) const{
  for (Route* route : routes) { // Verifica rotas diretas entre a origem e o destino
    if (route->getOrigin() == origin && route->getDestination() == destination) {
      return route;
    }
  }

  // Caso não seja encontrada nenhuma rota direta, será analisado as rotas indiretas
  std::unordered_set <City*> visited;
  std::queue<std::pair<City*, Route*>> toIndirectWay;

  // Adiciona a cidade de origem ao caminho indireto
  toIndirectWay.push({origin, nullptr})
  visited.insert(origin);

  while (!toIndirectWay.empty()) {
    City* currentCity = toIndirectWay.front().first;
    Route* lastRoute = toIndirectWay.front().second;
    toIndirectWay.pop();

    // Reali
  }
  return nullptr;
}

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

#endif // trafficcontroler_hpp
