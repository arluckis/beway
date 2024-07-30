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
  double calculateDistance(City* origin, City* destiny){      // Valor inicial para a distância em 0.0 (pois é uma variável double)
    return 0.0;
  }

  //Calcular o tempo estimado com os dados da distância percorrida, velocidade média e tempo de descando do transporte
  void calculateEstimatedTime(){
    double distance = calculateDistance(origin, destinyCity);          // Calcula a distância percorrida
    double numberOfRests = ceil(distance/ distanceTimeOfRest);         // Números de descansos
    double timeOfRest = transportOfTrip->getRestTime();                // Pega o tempo de descanso do transporte de outro arquivo
    double averageSpeed = transportOfTrip->getAverageSpeed();          // Pega a velocidade média do transporte de outro arquivo
    double estimatedTime = ((distance / averageSpeed) + (numberOfRests * timeOfRest))       // Tempo estimado
  }

public:
  // Definindo o construtor para Trip: variável transport, city origin e city destiny devem ser informadas e demais variáveis tem que ser inicializadas
  Trip(Transport* transport, City* origin_, City* destinyCity) : transportOfTrip(transport), origin(originCity), destiny(destinyCity), next(nullptr), timeInTraffic(0), inProgress(false), calculateEstimatedTime() {}

  // Método utilizado para dar início a uma viagem
  void beginTrip() {
    inProgress = true;
    timeInTraffic = 0;  //Verificar necessidade, pois já se inicia em 0
  }

  // Método utilizado para adiantar a hora
  void advanceHour() {
    if (inProgress) {
      TimeInTraffic++;
      if (timeInTraffic >= estimatedTime) {
        endTrip();    // Se o tempo em viagem for maior que o tempo estimado da viagem, a viagem tem que ser finalizada
      }
    }
  }

// Método utilizado para alterar o estado da viagem para finalizado
void endTrip() {
  inProgress = false;
}

  // Mostra todos os detalhes da viagem (Cidade de origem, Cidade de destino, Tempo decorrido, passageiros na viagem e estado da viagem)
  void showStatus() {
    std::cout << "Trip details: " << std::endl;
    std::cout << "Origin City: " << origin->getName() << std::endl;
    std::cout << "Destiny City: " << destiny->getName() << std::endl;
    std::cout << "Time in traffic: " << timeInTraffic << "hours" << std::endl;
    std::cout << "Status: " << (inProgress? "In Progress" : "Not In Progress") << std::endl;
    std::cout << "Passenger: " << std::endl;
    for (Passenger* passenger : passengers) {
      std::cout << " - " << passenger->getName() << std::endl;
      }
  }

  // Retorna a variável inProgress que irá definir se a viagem está em progresso ou não
  bool isInProgress() const {
    return inProgress;
  }
};

#endif // trip_hpp
