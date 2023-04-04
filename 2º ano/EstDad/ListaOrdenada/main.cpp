#include "Lista.hpp"

using namespace std;

int main()
{
    int op, dia, mes, ano;
    Lista **P, obj;
    P = new Lista*[2];
    P[0] = NULL;
    P[1] = NULL;
    string nome;
    bool j;
    do
    {
        system("clear");
        cout << "1 - Inserir \n";
        cout << "2 - Listar \n";
        cout << "3 - Remover \n";
        cout << "4 - Sair \n";
        cout << "Informe a opção : ";
        cin >> op;

        switch(op)
        {
        case 1:
            cout<<"\nInforme o nome:\n";
            cin>>nome;
            cout<<"\nInforme o dia:\n";
            cin>>dia;
            cout<<"\nInforme o mês:\n";
            cin>>mes;
            cout<<"\nInforme o ano:\n";
            cin>>ano;
            P = obj.Inserir(P, nome, dia, mes, ano);
            break;

        case 2:
            cout<<"Nomes Ordenados: \n";
            obj.Percorrer(P[0]);
            break;

        case 3:
            cout<<"\nInforme o nome a ser excluído:\n";
            cin>>nome;
            P = obj.Remover(P, nome, &j);
            if(j)
            {
                cout<<"Nome Removido!\n";
            }
            else
            {
                cout<<"Nome Inexistente!\n";
            }
            break;

        case 4:
            cout<<"\nTchau!!";
            break;

        default:
            cout<<"\nOpção Inválida!!\n";
        }
         cin.ignore().get();
    }

    while(op != 4);
    return 0;
}


