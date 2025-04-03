#include "Tarefa.h"
#include "../include/nlohmann/json.hpp"
#include <fstream>

using json = nlohmann::json;

void adicionarTarefa(std::vector<Tarefa>& tarefas, const std::string& descricao)
{
    tarefas.push_back({ descricao, false });
}

// Implemente as outras funções aqui...