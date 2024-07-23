#ifndef TRIP_HPP
#define TRIP_HPP

#include <iostream>          // Inicializador do programa em C++
#include <vector>            // Incluir a biblioteca vetor, para poder utilizar vetores durante a programação
#include <cmath>             // Para poder utilizar a função ceil()
#include <string>            // Incluir a biblioteca string
#include "city.hpp"          // Pegar informações referente a um arquivo chamado de city.hpp que possui definido a variável City(Cidade)
#include "transporte.hpp"    // Pegar informações referente a um arquivo chamado de transport.hpp que possui definido a variável Transport(Transporte)
#include "passageiro.hpp"    // Pegar informações referente a um arquivo chamado de passenger.hpp que possui definido a variável Passenger(Passageiro)

using namespace std;         // Isenta o uso do std durante o seguinte programa

class Trip { //Definindo a classe Trip(Viagem)
private:
  Transport* transportOfTrip; 
  city* origin;
  city* destiny;
  trip* next;
  int timeInTraffic;
  bool inProgress;

public:
  // Definindo o construtor para Trip: variável transport, city origin e city destiny devem ser informadas e demais variáveis tem que ser inicializa
  Trip(Transport* transport, City* origin_, City* destinyCity) : transportOfTrip(transport), origin(originCity), destiny(destinyCity), next(nullptr), timeInTraffic(0), inProgress(false) {}

  //Calcular o tempo estimado com os dados da distância percorrida, velocidade média e tempo de descando do transporte
  double distance = calculateDistance(origin, destinyCity);
  double numberOfRests = ceil(distance/ distanceTimeOfRest);
  double averageSpeed = transport->getAverageSpeed();
  double estimatedTime = ((distance / averageSpeed) + (numberOfRests * timeOfRest))


  // Método utilizado para dar início a uma viagem
  void beginTrip() {
    inProgress = true;
    timeInTraffic = 0;  //Verificar necessidade, pois já se inicia em 0
  }

  // Método utilizado para adiantar a hora
  void advanceHour() {
    TimeInTraffic++;
    if (timeInTraffic >= estimatedTime) {
      endTrip();    //Se o tempo em viagem for maior que o tempo estimado da viagem, a viagem tem que ser finalizada (necessário definir o tempo estimado)
    }
  }
  // Mostra todos os detalhes da viagem (Cidade de origem, Cidade de destino)
  void showStatus() {
    std::cout << "Trip details: " << std::endl;
    std::cout << "Origin City: " << origin->getName() << std::endl;
    std::cout << "Destiny City: " << destiny->getName() << std::endl;
    std::cout << "Time in traffic: " << timeInTraffic << "hours" << std::endl;
    for passenger {
      std::cout << 
      }
    std::cout << 
  }

  // Retorna a variável inProgress que irá definir se a viagem está em progresso ou não
  bool isInProgress() const {
    return inProgress;
  }
};

#endif // TRIP_HPP
