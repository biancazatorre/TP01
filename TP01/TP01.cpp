// TP01.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

int main()
{
    string nome = "";
    double p1 = 0.0;
    double p2 = 0.0;
    double media = 0.0;


    cout << "Digite seu nome: \n";
        cin >> nome;

    cout << "Digite p1: \n";
        cin >> p1;

    cout << "Digite p2: \n";
    cin >> p2;

    media = (p1 + p2) / 2;

    cout << "Sua media e: " << media << endl;

    if (media > 6)
    {
            cout << "Aprovado\n" << endl;
    }
    else 
    {
            cout << "Reprovado\n" << endl;
    }




 
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
