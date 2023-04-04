#include <iostream>
#include <cstdlib>

class Lista
{
public :
    int s, n;
    std :: string nome ;
    std :: string matricula;
    Lista * prox, * ant ;
    Lista ** Inserir( Lista **, std :: string, std :: string ) ;
    void Listar ( Lista **, int);
    Lista ** Remover( Lista **, std :: string );
    Lista ** Sortear( Lista **);
};

Lista** Lista::Inserir( Lista **L, std::string N, std::string T)
{
    Lista *novo = new Lista ();
    Lista *aux;
    novo->nome = N;
    novo->matricula = T;
    if(L[0] == NULL)
    {
        L[0] = novo;
        L[1] = novo;
        L[0] -> ant = L[1];
        L[1] -> prox = L[0];
    }
    else
    {
        aux = L[0];
        while((aux != L[1]) && (novo -> nome > aux -> nome))
        {
            aux = aux->prox;
        }
        if((aux == L[0]) && (novo -> nome < aux -> nome))
        {
            novo->prox = L[0];
            L[0] -> ant = novo;
            L[0] = novo;
            L[0] -> ant = L[1];
            L[1] -> prox = L[0];
        }
        else if((aux == L[1]) && (novo->nome > aux->nome))
        {
            novo -> ant = L[1];
            L[1] -> prox = novo;
            L[1] = novo;
            L[1] -> prox = L[0];
            L[0] -> ant = L[1];
        }
        else
        {
            novo -> prox = aux;
            novo -> ant = aux -> ant;
            aux -> ant = novo;
            novo -> ant -> prox = novo;
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

        while( aux -> prox != L[0] )
        {
            std :: cout << aux -> nome << " - " << aux -> matricula << std :: endl ;
            aux = aux -> prox ;
        }
        std :: cout << aux -> nome << " - " << aux -> matricula << std :: endl ;
    }
    else
    {
        aux = L [1];
        while( aux != L[0] )
        {
            std :: cout << aux -> nome << " - " << aux -> matricula << std :: endl ;
            aux = aux -> ant;
        }
        std :: cout << aux -> nome << " - " << aux -> matricula << std :: endl ;
    }
};


Lista ** Lista::Sortear(Lista **L)
{
    Lista * sorteado, *proximo = L[0];
    while(L[0] != L[1])
    {
        sorteado = proximo;
        s = rand()%2;
        n = rand()%15 + 1;
        if(s == 0)
        {

            for(int i = 1; i <= n; i++)
            {
                sorteado = sorteado -> prox;
            }
            proximo = sorteado -> prox;
            L = Remover(L, sorteado -> nome);
        }
        else
        {

            for(int i = 1; i <= n; i++)
            {
                sorteado = sorteado -> ant;
            }
            proximo = sorteado -> ant;

        }
        L = Remover(L, sorteado -> nome);
    }
    return L;
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
            L[1] -> prox = L[0];
        }
        else if( aux == L [1])
        {
            L [1] = L [1] -> ant ;
            L [1] -> prox = L[0];
            L[0] -> ant = L[1];
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

