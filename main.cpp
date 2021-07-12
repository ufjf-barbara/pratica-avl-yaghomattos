
#include <iostream>
#include "ArvoreAVL.h"
#include <chrono>

void timerStart();
float timerEnd();

chrono::high_resolution_clock::time_point start;
chrono::high_resolution_clock::time_point final;

using namespace std;

int main()
{
    cout << "Arvore AVL!\n"
         << "Informe as chaves (inteiras) ou -1 para sair:\n";
    ArvoreAVL avl;
    int chave;
    timerStart();
    scanf("%d", &chave);
    while (chave != -1)
    {
        avl.insere(chave);
        scanf("%d", &chave);
    }
    avl.imprime();
    cout << "tempo de execucao -> " << timerEnd() << " segundos" << endl;
}

void timerStart()
{
    start = chrono::high_resolution_clock::now();
}

float timerEnd()
{
    final = chrono::high_resolution_clock::now();
    chrono::duration<float> timeMS = final - start;
    return timeMS.count();
}