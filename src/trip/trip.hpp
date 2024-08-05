#ifndef trip_hpp
#define trip_hpp

#include <iostream>          // Inicializador do programa em C++
#include <vector>            // Incluir a biblioteca vetor, para poder utilizar vetores durante a programação
#include <cmath>             // Para poder utilizar a função ceil()
#include <string>            // Incluir a biblioteca string
#include "../city/city.hpp"                // Pegar informações referente a um arquivo chamado de city.hpp que possui definido a variável City(Cidade)
#include "../transport/transport.hpp"      //Pegar informações referente a um arquivo chamado de transport.hpp que possui definido a variável Transport(Transporte)
#include "../passenger/passenger.hpp"      // Pegar informações referente a um arquivo chamado de passenger.hpp que possui definido a variável Passenger(Passageiro)

using namespace std;         // Isenta o uso do std durante o seguinte programa

class Trip { // Definindo a classe Trip (Viagem)
private:
  Transport* transportOfTrip; 
  std::vector <Passenger*> passengers;
  City* origin;
  City* destiny;
  Trip* next;
  int timeInTraffic;
  bool inProgress;

  double calculateDistance(City* origin, City* destiny);      // Valor inicial para a distância em 0.0 (pois é uma variável double, somente declarar)
   
  void calculateEstimated();

public:
  // Definindo o construtor para Trip: variável transport, city origin e city destiny devem ser informadas e demais variáveis tem que ser inicializadas
  Trip(Transport* transport, City* origin_, City* destinyCity);

  // Método utilizado para dar início a uma viagem
  void beginTrip();

  // Método utilizado para adiantar a hora
  void advanceHour();

  // Método utilizado para alterar o estado da viagem para finalizado
void endTrip();

  // Mostra todos os detalhes da viagem (Cidade de origem, Cidade de destino, Tempo decorrido, passageiros na viagem e estado da viagem)
  void showStatus();

  // Retorna a variável inProgress que irá definir se a viagem está em progresso ou não
  bool isInProgress() const;
};

#endif // trip_hpp
