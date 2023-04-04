# include <iostream>
# include <cstdlib>

class Lista
{
public :
    std :: string nome ;
    int dia, mes, ano ;   // data de nascimento
    Lista * elo ;
    Lista ** Inserir( Lista **, std :: string, int, int, int);
    void Percorrer( Lista *) ;
    Lista ** Remover( Lista **, std :: string, bool *) ;
};

Lista **Lista::Inserir(Lista **p, std::string nome, int dia, int mes, int ano)
{
    Lista *novo = new Lista();
    novo -> nome = nome;
    novo -> dia = dia;
    novo -> mes = mes;
    novo -> ano = ano;

    if(p[0] == NULL)
    {
        p[0] = novo;
        p[1] = novo;
        p[1] -> elo = NULL;
    }
    else
    {
        Lista *ant = NULL, *prox = p[0];
        while((prox != NULL) && ((ano > prox->ano) || ((ano == prox->ano) && (mes > prox->mes)) || ((ano == prox->ano) && (mes == prox->mes) && (dia > prox->dia))))
        {
            ant = prox;
            prox = prox -> elo;
        }
        if(ant == NULL)
        {
            novo -> elo = p[0];
            p[0] = novo;
        }
        else if(prox == NULL)
        {
            novo -> elo = NULL;
            p[1] -> elo = novo;
            p[1] = novo;
        }
        else
        {
            ant -> elo = novo;
            novo -> elo = prox;
        }

    }
    return p;
};

void Lista::Percorrer(Lista*p)
{
    Lista * aux = p;
    while( aux != NULL )
    {
        std :: cout << aux -> nome << " - " << aux -> dia << "/" << aux -> mes << "/ " << aux -> ano << "\n";
        aux = aux -> elo;
    }

};

Lista** Lista::Remover(Lista**p, std::string nome, bool *comp)
{
    Lista *ant = NULL, *prox = p[0];
    *comp = true;
    while((prox != NULL) && (nome != prox -> nome ))
    {
        ant = prox;
        prox = prox -> elo;
    }
    if(prox == NULL)
    {
        *comp = false;
        return p;
    }
    if( prox == p[0])
    {
        p[0] = p[0] -> elo;
    }
    else if( prox == p [1])
    {
        p[1] = ant;
        p[1] -> elo = NULL;
    }
    else
    {
        ant -> elo = prox -> elo;
    }
    delete(prox);
    return p;
};

