#include "menu.hpp"

void createLine(){
    std::cout << "-----------------------------------------------------" << std::endl;
}

void showMenu(){
    createLine();
    std::cout << "|                         BWAY                      |" << std::endl;
    createLine();
    std::cout << "|1. Cadastrar passageiro no sistema                 |" << std::endl;
    createLine();
    std::cout << "|2. Cadastrar cidade no sistema                     |" << std::endl;
    createLine();
    std::cout << "|3. Cadastrar tipo de veículo no sistema           |" << std::endl;
    createLine();
    std::cout << "|4. Cadastrar viagem no sistema                     |" << std::endl;
    createLine();
    std::cout << "|5. Cadastrar passageiro em alguma viagem           |" << std::endl;
    createLine();
    std::cout << "|6. Executar alguma viagem                          |" << std::endl;
    createLine();
    std::cout << "|7. Avançar uma hora no sistema                    |" << std::endl;
    createLine();
    std::cout << "|8. Mostrar os detalhes de viagem                   |" << std::endl;
    createLine();
    std::cout << "|9. Mostrar informações sobre algum passageiro    |" << std::endl;
    createLine();
    std::cout << "|10. Mostrar informações sobre veículo           |" << std::endl;
    createLine();
    std::cout << "|11. Mostrar informações sobre rota                |" << std::endl;
    createLine();
    std::cout << "|12. Sair do programa                               |" << std::endl;
    createLine();
}

bool astronautAlreadyRegistered(string CPF, vector<Passenger> &passengers)
{
    for (int i = 0; i < passengers.size(); i++)
    {
        string cpfAux = passengers[i]->getCPF();
        if (CPF == cpfAux)
        {
            return true;
        }
    }
    return false;
}
