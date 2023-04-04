
#include "Arvore.hpp"

using namespace std;

int main()
{
    Arvore * Raiz = NULL, obj ;
    int op, Numero, s ;
    do
    {
        system (" cls ") ;
        cout << endl << " Menu de Opcoes " << endl ;
        cout << "1 - Inserir na Arvore " << endl ;
        cout << "2 - Consultar um No da Arvore " << endl ;
        cout << "3 - Consultar toda a Arvore em Ordem " << endl ;
        cout << "4 - Consultar toda a Arvore em Pre Ordem " << endl ;
        cout << "5 - Consultar toda a Arvore em Pos Ordem " << endl ;
        cout << "6 - Excluir um No da Arvore " << endl ;
        cout << "7 - Maior numero da Arvore " << endl ;
        cout << "8 - Soma dos Pares " << endl ;
        cout << "9 - Soma dos Primos " << endl ;
        cout << "10 -Encerrar o programa" << endl ;
        cout << " Informe sua opcao : ";
        cin >> op ;
        switch ( op )
        {
        case 1:
            cout << " Informe o número a ser inserido na arvore : ";
            cin >> Numero ;
            Raiz = obj. Inserir( Raiz, Numero ) ;
            cout << " Registro inserido com sucesso!! " << endl ;
            break ;
        case 2:
            if ( Raiz == NULL )
            {
                cout << " Arvore esta vazia !!" << endl ;
            }
            else
            {
                cout << " Informe o número a ser consultado: ";
                cin >> Numero ;
                if( obj. Consultar( Raiz, Numero ))
                    cout << Numero << " encontrado na arvore ." << endl ;
                else
                    cout << Numero << " não encontrado" << endl ;
            }
            break ;
        case 3:
            if ( Raiz == NULL )
            {
                cout << " Arvore esta vazia !!" << endl ;
            }
            else
            {
                cout << " Listando a Arvore em Ordem " << endl ;
                obj . MostrarEmOrdem( Raiz ) ;
            }
            break ;
        case 4:
            if ( Raiz == NULL )
            {
                cout << " Arvore esta vazia !!" << endl ;
            }
            else
            {
                cout << " Listando a Arvore em Pre Ordem " << endl ;
                obj . MostrarPreOrdem( Raiz );
            }
            break ;
        case 5:
            if ( Raiz == NULL )
            {
                cout << " Arvore esta vazia !!" << endl ;
            }
            else
            {
                cout << " Listando a Arvore em Pos Ordem " << endl ;
                obj . MostrarPosOrdem( Raiz );
            }
            break ;
        case 6:
            if ( Raiz == NULL )
            {
                cout << " Arvore esta vazia !!" << endl ;
            }
            else
            {
                cout << " Informe o número que deseja excluir: ";
                cin >> Numero ;
                if( obj. Consultar( Raiz, Numero ))
                {
                    Raiz = obj . Remover( Raiz, Numero );
                    Raiz = obj . Atualiza( Raiz );
                    cout << " Número removido com sucesso!! " << endl ;
                }
                else
                {
                    cout << " Número nao encontrado na Arvore " << endl ;
                }
            }
            break ;
        case 7:
            Numero = obj.MaiorNumero(Raiz);
	cout << Numero;
            break;
        case 8:
            s = 0;
            obj.SomaPar(Raiz, &s);
            cout << s;
            break;
        case 9:
            s = 0;
            obj.SomaPrimos(Raiz, &s);
            cout << s;
            break;
        case 10:
            cout << " Programa encerrado!" << endl ;
            break ;
        default:
            cout << " opcao invalida" << endl ;
        }
        cin.ignore().get();
    }
    while( op != 10 ) ;


    return 0;
}



