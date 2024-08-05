#ifndef trafficcontroler_hpp
#define trafficcontroler_hpp

#include <iostream>          // Inicializador do programa em C++
#include <vector>            // Incluir a biblioteca vetor, para poder utilizar vetores durante a programação
#include <string>            // Incluir a biblioteca string, para a criação e manipulação de cadeia de caracteres
#include <algorithm>         // Incluir a biblioteca algorithm, para fornecer uma série de algoritmos genéricos e funções de utilidade para operações comuns
#include <unordered_set>
#include <queue>
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

// Função para procurar se o nome da cidade se existe no ponteiro city, caso não encontre retorna "não encontrado"
City* findCityByName(const string& name) const;

// Função para procurar uma rota direta ou indireta, caso não encontre retorna "não encontrado"
Route* findRouteByCities(City* origin, City* destination) const;

// Função para procurar se o nome do transporte se existe no ponteiro transport, caso não encontre retorna "não encontrado"
Transport* findTransportByName(const string& name) const;

// Função para procurar se o nome do transporte se existe no ponteiro transport, caso não encontre retorna "não encontrado"
Passenger* findPassengerByName(const string& name) const;

public:
  void cadastreCity(const std::string name);
  void cadastreRoute(const std::string nameOrigin, const std::string nameDestiny, char type, int distance);
  void cadastreTransport(const std::string name, char type, int capacity, int speed, int distanceBetweenRests, int timeOfRest, const std::string currentLocation);
  void cadastrePassenger(const std::string name, const std::string passengerCurrentCity);
  void beginTrip(const std::string nameTransport, const std::vector<std::string> namesPassengers, const std::string nameOrigin, const std::string nameDestiny);
  void avanceHour(int hours);
  void relateState() const;
};

#endif // trafficcontroler_hpp
