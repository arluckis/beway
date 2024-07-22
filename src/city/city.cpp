#include "city.hpp"
#include "../menu/menu.hpp"

City::City(std::string name){
    cityName = name;
    numberOfTrips = 0;
}
    
void City::addNearbyCity(City &city){
    nearbyCities.push_back(&city);
}

std::string City::getCityName(){
    return cityName;
}

std::vector<City*> City::getNearbyCities(){
    return nearbyCities;
}

void City::listNearbyCities(){
    if(nearbyCities.empty()){
        std::cout << "Por enquanto não existem cidades cadastradas! Cadastre uma agora mesmo em nossa opção XXX" << std::endl;
    }
    else{
        std::cout << "As cidades cadastradas por aqui são:" << std::endl;
        for(int i = 0; i < nearbyCities.size(); i++){
            std::cout << nearbyCities[i] -> getCityName();
            createLine();
        }
    }
}

void City::addTrip(){
    numberOfTrips ++;
}