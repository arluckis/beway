#include "trafficControler.hpp"

// Função para procurar se o nome da cidade se existe no ponteiro city, caso não encontre retorna "não encontrado"
City* TrafficControler::findCityByName(const string& name) const{
  for (City* city : cities) {
    if (city->getName() == name) {
      return city;
    }
  }
  return nullptr;
}

// Função para procurar uma rota direta ou indireta, caso não encontre retorna "não encontrado"
Route* TrafficControler::findRouteByCities(City* origin, City* destination) const {
  for (Route* route : routes) {           // Verifica rotas diretas entre a origem e o destino
    if (route->getOrigin() == origin && route->getDestination() == destination) {
      return route;
    }
  }

  // Caso não seja encontrada nenhuma rota direta, será analisado as rotas indiretas
  std::unordered_set <City*> visited;
  std::queue<std::pair<City*, Route*>> toIndirectWay;

  // Adiciona a cidade de origem ao caminho indireto
  toIndirectWay.push({origin, nullptr});
  visited.insert(origin);

  while (!toIndirectWay.empty()) {
    City* currentCity = toIndirectWay.front().first;
    Route* lastRoute = toIndirectWay.front().second;
    toIndirectWay.pop();

    // Realiza averificação da cidade de origem e destino, e insere as cidades no caminho indireto (toIndirectWay)
    for (Route* route : routes) {
      if (route->getOrigin() == currentCity && visited.find(route->getDestination()) == visited.end()){
        if (route->getDestination() == destination) {
          return route;
        }
        toIndirectWay.push({route->getDestination(), route});
        visited.insert(route->getDestination());
      }
    }
  }
  return nullptr;
}

// Função para procurar se o nome do transporte se existe no ponteiro transport, caso não encontre retorna "não encontrado"
Transport* TrafficControler::findTransportByName(const string& name) const {
  for (Transport* transport : transports) {
    if (transport->getName() == name) {
      return transport;
    }
  }
  return nullptr;
}

// Função para procurar se o nome do transporte se existe no ponteiro transport, caso não encontre retorna "não encontrado"
Passenger* TrafficControler::findPassengerByName(const string& name) const{
  for (Passenger* passenger : passengers) {
    if (passenger->getName() == name) {
      return passenger;
    }
  }
  return nullptr;
}

  // função para relatar tudo que foi cadastrado no sistema (Cidades, Rotas, Transportes, passageiros e viagens em andamento)
  void TrafficControler::relateState() const {
    std::cout << "Current System State" << std::endl; // Título da relação de estado
    
    std::cout << "Cadastred Cities" << std::endl; // Informações sobre a cidade
    for (auto city : cities) {
      std::cout << "* " << city->getName() << std::endl;
    }
    
    std::cout << "Cadastred Routes" << std::endl; // Informações sobre as rotas
    for (auto route : routes) {
      std::cout << "- From " << route->getOrigin()->getName() << " to " << route->getDestiny()getName() << "(" << route->getType() << ", " << route->getDistance() << " km)" << std::endl;
    }

    std::cout << "Cadastred Transports" << std::endl; // Informações sobre os transportes
     for (auto transport : transports) {
      std::cout << "* " << transport->getName() << " (Type: " << transport->getType() << ", Capacity: " << transport->getCapacity() << ", Speed: "  << transport->getSpeed() << "Km/h" << std::endl;
    }
    
    std::cout << "Cadastred Passengers" << std::endl; // Informações sobre os passageiros
    for (auto passenger : passengers) {
      std::cout << " (Current City: " << passenger->getCurrentCity()->getName() << ")" << std::endl;
    }
 
  }
}

#endif // trafficcontroler_hpp
