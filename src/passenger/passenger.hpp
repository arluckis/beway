#ifndef PASSENGER_HPP
#define PASSEGER_HPP

#include <string>
#include "../city/city.hpp"

class Passenger{
private:
    std::string passengerName;
    std::string passengerCPF;
    Trip* atualTrip;
public:
    Passenger(std::string name, std::string cpf);
    std::string getPassengerName();
    std::string getPassengerCPF();
    Trip* getAtualTrip();

};

#endif