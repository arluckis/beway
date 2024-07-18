#ifndef CIDADE_HPP
#define CIDADE_HPP

#include <string>

// Classe Cidade
class Cidade {
private:
    std::string nome;
public:
    Cidade(std::string nome);
    std::string getNome();
};

#endif // CIDADE_HPP