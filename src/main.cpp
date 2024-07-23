#include <iostream>
#include "menu/menu.hpp"

using namespace std;

int main()
{
    int choice = 0;
    string cpf, cityName;

    bool keepContinue = true;
    while (keepContinue)
    {
        showMenu();
        cout << "Selecione a opção desejada: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            // Implementação da opção 1 do menu
            break;
        case 2:
            // Implementação da opção 2 do menu
            break;
        case 3:
            // Implementação da opção 3 do menu
            break;
        case 4:
            // Implementação da opção 4 do menu
            break;
        case 5:
            // Implementação da opção 5 do menu
            break;
        case 6:
            // Implementação da opção 6 do menu
            break;
        case 7:
            // Implementação da opção 7 do menu
            break;
        case 8:
            // Implementação da opção 8 do menu
            break;
        case 9:
            // Implementação da opção 9 do menu
            break;
        case 10:
            // Implementação da opção 10 do menu
            break;
        case 11:
            cout << "Finalizando o seu programa" << endl;
            keepContinue = false;
            break;

        default:
            cout << "Essa opção não existe! Por favor, digite uma opção válida." << endl;
            break;
        }
    }
    return 0;
}
