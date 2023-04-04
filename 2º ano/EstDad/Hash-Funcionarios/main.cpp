#include "Hash.hpp"
using namespace std;

int main()
{
    Hash *tabela[4] = { NULL, NULL, NULL, NULL}, obj, *aux;
    string nome, depto;
    int idade, pos;
    float sal;
    do
    {
        cin >> nome >> depto >> idade >> sal;
        if(sal > -1)
        {
            pos = obj.funcao_hashing(depto[0]);
            obj.inserir(tabela, pos, nome, depto, idade, sal);
        }
    }
    while(sal > -1);
    cout<< "\n Mostrando a Tabela \n";
    obj.mostrar_hash(tabela);

    return 0;
}

