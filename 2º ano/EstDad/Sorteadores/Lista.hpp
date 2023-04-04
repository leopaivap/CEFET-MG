#include <iostream>
#include <cstdlib>

class Lista
{
public:
    std::string nome;
    Lista * elo ;
    Lista ( void );
    Lista ** Inserir( Lista **, std :: string );
    Lista ** Remover( Lista **, std :: string );
    void Mostrar( Lista ** );
    Lista ** Sorteia( Lista ** ) ;
};
Lista::Lista(void)
{
    srand(unsigned(time(NULL)));
};

Lista ** Lista::Inserir(Lista **L, std::string n)
{
    Lista **R = L;
    Lista * novo = new Lista();
    novo -> nome = n;
    if(L[0] == NULL)
    {
        L[0] = novo;
        L[1] = novo;
    }
    else
    {
        L[1] -> elo = novo;
        L[1] = novo;
    }
    L[1] -> elo = L[0];
    return R;
};

Lista ** Lista::Remover(Lista **L, std::string n)
{
    Lista * prox = L[0];
    Lista * ant = NULL;
    Lista * aux;
    while((prox != NULL) && (n != prox -> nome))
    {
        ant = prox;
        prox = prox -> elo;
    }
    aux = prox;
    if(prox == L[0])
    {
        L[0] = L[0] -> elo;
        L[1] -> elo = L[0];
    }
    else if(prox == L[1])
    {
        L[1] = ant;
        L[1] -> elo = L[0];
    }
    else
    {
        ant -> elo = prox -> elo;
    }
    std::cout<<"Nome removido: "<<aux -> nome<<"\n";
    delete(aux);
    return L;
};

Lista ** Lista::Sorteia(Lista **L)
{
    int n;
    Lista * sorteado, *proximo = L[0];
    while(L[0] != L[1])
    {
        sorteado = proximo;
        n = rand()%10 + 1;
        for(int i = 1; i <= n; i++)
        {
            sorteado = sorteado -> elo;
        }
        proximo = sorteado -> elo;
        L = Remover(L, sorteado -> nome);
    }
    return L;
};

void Lista::Mostrar(Lista **L)
{
    Lista *aux = L[0];
    do
    {
        std::cout << aux -> nome << "\n";
        aux = aux -> elo;
    }
    while(aux != L[1]);
    if(L[0] != L[1])
        std::cout << aux -> nome << "\n";
};



