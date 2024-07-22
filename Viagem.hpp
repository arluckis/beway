#ifndef VIAGEM_HPP
#include "Cidade.hpp"

// Classe para representar uma Viagem
class Viagem {
private:
    std::vector<const Passageiro*> passageiros;
    const Cidade& origem;
    const Cidade& destino;
    const Transporte& transporte;
    EstadoViagem estado;

public:
    Viagem(const Cidade& origem, const Cidade& destino, const Transporte& transporte)
        : origem(origem), destino(destino), transporte(transporte), estado(EmAndamento) {}

    const Cidade& getOrigem() const {
        return origem;
    }

    const Cidade& getDestino() const {
        return destino;
    }

    const Transporte& getTransporte() const {
        return transporte;
    }

    const std::vector<const Passageiro*>& getPassageiros() const {
        return passageiros;
    }

    EstadoViagem getEstado() const {
        return estado;
    }

    void registrarPartida() {
        std::cout << "Viagem iniciada de " << origem.getNome() << " para " << destino.getNome() << " com transporte " << transporte.getNome() << std::endl;
        // Implementar lógica para registrar a partida da viagem
    }

    void registrarChegada() {
        std::cout << "Viagem de " << origem.getNome() << " para " << destino.getNome() << " com transporte " << transporte.getNome() << " concluída." << std::endl;
        // Implementar lógica para registrar a chegada da viagem
    }

    void avancarTempo(double horas) {
        // Implementar lógica para avançar o tempo da viagem
    }
};






#endif // VIAGEM.HPP
