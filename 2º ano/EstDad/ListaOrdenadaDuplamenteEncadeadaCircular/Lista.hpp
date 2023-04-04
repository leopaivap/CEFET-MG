#include <iostream>
#include <cstdlib>

class Lista
{
public :
    std :: string nome ;
    std :: string Telefone;
    Lista * prox, * ant ;
    Lista ** Inserir( Lista **, std :: string, std :: string ) ;
    void Listar ( Lista **, int);
    Lista ** Remover( Lista **, std :: string );
};

Lista ** Lista :: Inserir( Lista **L, std :: string N, std :: string T)
{
    Lista * novo = new Lista ();
    Lista * aux;
    novo -> nome = N;
    novo -> Telefone = T;
    if( L [0] == NULL )
    {
        L [0] = novo;
        L [1] = novo;
        L [0] -> ant = novo;
        L [1] -> prox = novo;
    }
    else
    {
        aux = L[0];
        while (( aux != L[1]) && ( novo -> nome > aux -> nome ))
        {
            aux = aux -> prox;
        }
        if( (aux == L [0]) && (novo->nome < aux -> nome))
        {
            novo -> prox = L [0];
            L [0] -> ant = novo;
            L [0] = novo ;
            L [0] -> ant = L[1];
            L [0] -> prox = L[0];
        }
        else if( (aux == L[1]) && (novo->nome > aux->nome))
        {
            L [1] -> prox = novo;
            novo -> ant = L[1];
            L [1] = novo ;
            L [1] -> prox = L[0];
            L [0] -> ant = L[1];
        }
        else
        {
            aux -> ant -> prox = novo;
            novo -> ant = aux -> ant;
            novo -> prox = aux;
            aux -> ant = novo;
        }
    }
    return L;
};

void Lista :: Listar ( Lista **L, int op )
{
    Lista * aux;
    if( op == 0)
    {
        aux = L [0];

        while( aux->prox != L[0] )
        {
            std :: cout << aux -> nome << " - " << aux -> Telefone << std :: endl ;
            aux = aux -> prox ;
        }
        std :: cout << aux -> nome << " - " << aux -> Telefone << std :: endl ;
    }
    else
    {
        aux = L [1];
        while( aux != L[0] )
        {
            std :: cout << aux -> nome << " - " << aux -> Telefone << std :: endl ;
            aux = aux -> ant;
        }
        std :: cout << aux -> nome << " - " << aux -> Telefone << std :: endl ;
    }
};

Lista ** Lista :: Remover( Lista **L, std :: string N )
{
    Lista * aux = L [0];

    while (( aux -> prox != L[0] ) && ( aux -> nome != N))
    {
        aux = aux -> prox ;
    }
    if( (aux -> prox == L[0]) && ( aux -> nome != N))
    {
        std :: cout << "\nRegistro não encontrado !!\n";
        return L;
    }
    else
    {
        if( aux == L [0])
        {
            L [0] = L [0] -> prox ;
            L [0] -> ant = L[1] ;
        }
        else if( aux == L [1])
        {
            L [1] = L [1] -> ant ;
            L [1] -> prox = L[0];
        }
        else
        {
            aux -> ant -> prox = aux -> prox ;
            aux -> prox -> ant = aux -> ant ;
        }
        delete ( aux );
    }
    return L;
};

