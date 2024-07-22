#ifndef VIAGEM_HPP
#define VIAGEM_HPP

#include <iostream>
#include <vector>
#include "cidade.hpp"        // Supondo que exista um arquivo cidade.hpp com a definição de Cidade
#include "transporte.hpp"    // Supondo que exista um arquivo transporte.hpp com a definição de Transporte
#include "passageiro.hpp"    // Supondo que exista um arquivo passageiro.hpp com a definição de Passageiro
#include "estado_viagem.hpp" // Supondo que exista um arquivo estado_viagem.hpp com a definição de EstadoViagem

class Viagem {
private:
    const Cidade& origem;
    const Cidade& destino;
    const Transporte& transporte;
    std::vector<const Passageiro*> passageiros;
    EstadoViagem estado;

public:
    Viagem(const Cidade& origem, const Cidade& destino, const Transporte& transporte);

    const Cidade& getOrigem() const;
    const Cidade& getDestino() const;
    const Transporte& getTransporte() const;
    const std::vector<const Passageiro*>& getPassageiros() const;
    EstadoViagem getEstado() const;

    void registrarPartida();
    void registrarChegada();
    void avancarTempo(double horas);
};

#endif // VIAGEM_HPP
