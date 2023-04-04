#include "Lista.hpp"

using namespace std;

int main ()
{
    Lista obj, ** Re = new Lista *[2];
    Re [0] = Re [1] = NULL ;
    int op ;
    string N, T;
    do
    {
        system (" clear ") ;
        cout << "1 - Inserir\n";
        cout << "2 - Listar ordem crescente\n";
        cout << "3 - Listar ordem decrescente\n";
        cout << "4 - Remover\n";
        cout << "5 - Sair \n";
        cout << "\nInforme sua opção : ";
        cin >> op ;
        switch ( op )
        {
        case 1:
            cout << " Informe o nome : ";
            cin >> N;
            cout << " Informe o telefone: ";
            cin >> T;
            Re = obj . Inserir(Re,N,T);
            cout << " \nRegistro inserido com sucesso !!\n aperte ENTER para continuar ";
            break ;
        case 2:
            cout << " \nListagem ordem crescente\n";
            obj. Listar ( Re,0) ;
            break ;
        case 3:
            cout << " \nListagem ordem decrescente\n";
            obj. Listar ( Re,1) ;
            break ;
        case 4:
            cout << " Informe o nome para remover: ";
            cin >> N;
            Re = obj.Remover(Re,N );
            break ;
        case 5:
            cout << "\n Tchau !!";
            break ;
        default:
            cout << " \nOpção Inválida !!!\ n";
        }
        cin . ignore () . get () ;
    }
    while( op != 5) ;
    return 0;
}



