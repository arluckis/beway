#include "trip.hpp"

double calculateDistance(City* origin, City* destiny) {      // Valor inicial para a distância em 0.0 (pois é uma variável double)
    return 0.0;
}

//Calcular o tempo estimado com os dados da distância percorrida, velocidade média e tempo de descando do transporte
  void Trip::calculateEstimatedTime() {
    double distance = calculateDistance(origin, destinyCity);          // Calcula a distância percorrida
    double numberOfRests = ceil(distance/ distanceTimeOfRest);         // Números de descansos
    double timeOfRest = transportOfTrip->getRestTime();                // Pega o tempo de descanso do transporte de outro arquivo
    double averageSpeed = transportOfTrip->getAverageSpeed();          // Pega a velocidade média do transporte de outro arquivo
    double estimatedTime = ((distance / averageSpeed) + (numberOfRests * timeOfRest))       // Tempo estimado
  }
