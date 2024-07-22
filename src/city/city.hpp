#ifndef CITY_HPP
#define CITY_HPP

#include <string>
#include <vector>
#include <iostream>

class City{
private:  
    std::string cityName;
    std::vector<City*> nearbyCities;
    int numberOfTrips;
public:
    City(std::string name);
    void addNearbyCity(City &city);
    std::string getCityName();
    std::vector<City*> getNearbyCities();
    void listNearbyCities();
    void addTrip();
};

#endif