#include "Lista.hpp"

using namespace std;

int main()
{
    Lista **L, obj;
    L = new Lista *[2];
    L[0] = NULL;
    L[1] = NULL;
    string nome;
    int op;

    do
    {
        system("clear");
        cout << "1 - Inserir \n";
        cout << "2 - Mostrar Lista \n";
        cout << "3 - Realizar sorteio \n";
        cout << "4 - Sair \n ";
        cin>>op;
        switch(op)
        {
        case 1:
            cout << "Informe o nome a ser inserido: ";
            cin >> nome;
            L = obj.Inserir(L, nome);
            break;

        case 2:
            system("clear");
            cout << "Nomes: \n";
            obj.Mostrar(L);
            cout << "\n";
            break;

        case 3:
            L = obj.Sorteia(L);
            cout << "Vencedor: "<<L[0] -> nome << "\n";
            break;

        case 4:
            system("clear");
            cout << "TCHAU!!!\n";
            break;

        default:
            cout << "Opção Inválida! \n";
        }
        cout << "Aperte enter para continuar!\n";
        cin.ignore().get();
    }
    while(op != 4);
    return 0;
}

