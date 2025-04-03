#include <iostream>  
#include "Tarefa.h"  
#include "rang.hpp"  // Para cores  

int main()
{
    std::vector<Tarefa> tarefas;
    carregarTarefas(tarefas, "data/tarefas.json");

    while (true)
    {
        std::cout << rang::fg::green << "\n--- Gerenciador de Tarefas ---\n" << rang::fg::reset;
        std::cout << "1. Adicionar Tarefa\n";
        std::cout << "2. Listar Tarefas\n";
        std::cout << "3. Sair\n";
        std::cout << "Escolha uma opção: ";

        int opcao;
        std::cin >> opcao;
        std::cin.ignore();

        switch (opcao)
        {
        case 1: {
            std::string descricao;
            std::cout << "Digite a tarefa: ";
            std::getline(std::cin, descricao);
            adicionarTarefa(tarefas, descricao);
            break;
        }
        case 2:
            listarTarefas(tarefas);
            break;
        case 3:
            salvarTarefas(tarefas, "data/tarefas.json");
            return 0;
        default:
            std::cout << rang::fg::red << "Opção inválida!\n" << rang::fg::reset;
        }
    }
}