#ifndef TRAJETO_HPP
#include "Cidade.hpp"

// Classe Trajeto
class Trajeto {
    private:
        Cidade* origem;
        Cidade* destino;
        char tipo; // 'A' para Aquático, 'T' para Terrestre
        int distancia;
        
    public:
        Trajeto(Cidade* origem, Cidade* destino, char tipo, int distancia);
        Cidade* getOrigem();
        Cidade* getDestino();
        char getTipo();
        int getDistancia();
};

#endif // TRAJETO.HPP