# Gerenciador de Tarefas em C++

Este é um projeto simples de Gerenciador de Tarefas em C++ que permite:

- Adicionar tarefas
- Listar tarefas
- Marcar tarefas como concluídas
- Excluir tarefas

O programa utiliza manipulação de arquivos para salvar e carregar as tarefas, garantindo que os dados sejam persistentes entre as execuções.

---

## Funcionalidades

1. **Adicionar tarefa**: Insira o título e a descrição de uma nova tarefa.
2. **Listar tarefas**: Exibe todas as tarefas salvas, indicando se estão pendentes ou concluídas.
3. **Marcar tarefa como concluída**: Permite marcar uma tarefa específica como concluída.
4. **Excluir tarefa**: Remove uma tarefa específica do arquivo.
5. **Sair**: Encerra o programa.

---

## Como usar

### **1. Clone o repositório**
Primeiro, você precisa clonar o repositório para o seu computador. No terminal ou prompt de comando, execute:

bash
git clone https://github.com/melointhecloud/cpp-taskmanager.git
Isso criará uma cópia local do repositório na sua máquina.

2. Compile o código
O projeto é escrito em C++, então você precisará de um compilador C++ instalado no seu sistema. Aqui estão as instruções para os compiladores mais comuns:

2.1. Usando o g++ (Linux, macOS ou MinGW no Windows)
Navegue até a pasta do projeto:
bash
Copy Code
cd cpp-taskmanager
Compile o código com o comando:
bash
Copy Code
g++ -o GerenciadorTarefas main.cpp Tarefa.cpp
Isso criará um executável chamado GerenciadorTarefas (ou GerenciadorTarefas.exe no Windows).
2.2. Usando o Visual Studio (Windows)
Abra o arquivo GerenciadorTarefas.sln no Visual Studio.
Compile o projeto clicando em Build > Build Solution (ou pressione Ctrl+Shift+B).
O executável será gerado na pasta Debug ou Release, dependendo da configuração.
2.3. Usando o cmake (opcional)
Se preferir usar o cmake, você pode configurar o projeto com um arquivo CMakeLists.txt. Entre em contato se precisar de ajuda com isso.

3. Execute o programa
Depois de compilar, você pode executar o programa:

No Linux/macOS
bash
Copy Code
./GerenciadorTarefas
No Windows
bash
Copy Code
GerenciadorTarefas.exe
4. Use o menu do programa
O programa exibirá um menu com as opções disponíveis. Por exemplo:

plaintext
Copy 
=== Gerenciador de Tarefas ===
1. Adicionar tarefa
2. Listar tarefas
3. Marcar tarefa como concluída
4. Excluir tarefa
5. Sair
Escolha uma opção:

Adicionar tarefa: Insira o título e a descrição da tarefa.
Listar tarefas: Veja todas as tarefas pendentes e concluídas.
Marcar tarefa como concluída: Insira o ID da tarefa que deseja marcar como concluída.
Excluir tarefa: Insira o ID da tarefa que deseja excluir.
Sair: Encerra o programa.

Estrutura do Projeto
main.cpp: Arquivo principal do programa.
Tarefa.h e Tarefa.cpp: Definição e implementação da estrutura de tarefas.
data/: Pasta onde as tarefas são armazenadas (se aplicável).
tarefas.txt: Arquivo onde as tarefas são salvas automaticamente.

Requisitos
Compilador C++ (como g++, Visual Studio ou outro).
Sistema operacional compatível com C++ (Windows, Linux ou macOS).
Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests.

Licença
Este projeto está licenciado sob a licença MIT. Consulte o arquivo LICENSE para mais detalhes.
