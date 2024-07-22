#include "viagem.hpp"

Viagem::Viagem(const Cidade& origem, const Cidade& destino, const Transporte& transporte)
    : origem(origem), destino(destino), transporte(transporte), estado(EmAndamento) {}

const Cidade& Viagem::getOrigem() const {
    return origem;
}

const Cidade& Viagem::getDestino() const {
    return destino;
}

const Transporte& Viagem::getTransporte() const {
    return transporte;
}

const std::vector<const Passageiro*>& Viagem::getPassageiros() const {
    return passageiros;
}

EstadoViagem Viagem::getEstado() const {
    return estado;
}

void Viagem::registrarPartida() {
    std::cout << "Viagem iniciada de " << origem.getNome() << " para " << destino.getNome() << " com transporte " << transporte.getNome() << std::endl;
    // Implementar lógica para registrar a partida da viagem
}

void Viagem::registrarChegada() {
    std::cout << "Viagem de " << origem.getNome() << " para " << destino.getNome() << " com transporte " << transporte.getNome() << " concluída." << std::endl;
    // Implementar lógica para registrar a chegada da viagem
}

void Viagem::avancarTempo(double horas) {
    // Implementar lógica para avançar o tempo da viagem
}
