#pragma once
#include <string>
#include <vector>

struct Tarefa
{
    std::string descricao;
    bool completada;
};

void adicionarTarefa(std::vector<Tarefa>& tarefas, const std::string& descricao);
void listarTarefas(const std::vector<Tarefa>& tarefas);
void salvarTarefas(const std::vector<Tarefa>& tarefas, const std::string& arquivo);
void carregarTarefas(std::vector<Tarefa>& tarefas, const std::string& arquivo);