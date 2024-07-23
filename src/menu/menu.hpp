#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include "../passenger/passenger.hpp"

void showMenu();
void createLine();
bool astronautAlreadyRegistered(std::string CPF, std::vector<Passenger> &passengers);

#endif
