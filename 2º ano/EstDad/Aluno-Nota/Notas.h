#include <iostream>
#include <cstdlib>

class Notas
{
public:
    float nota;
    long long int matricula;
    Notas *elo;
    Notas* inserir(Notas*,float,long long int);
    Notas* remover(Notas*);
    void percorer(Notas*);
};

Notas* Notas::inserir(Notas *p, float nota, long long int matricula)
{
    Notas *novo = new Notas();
    novo ->  nota = nota;
    novo -> matricula = matricula;
    novo -> elo = p;
    return novo
};

Notas* Notas::remover(Notas *p)
{
    Notas *aux = p;
    p = p -> elo;
    delete aux;
    return p;
};

void Notas::percorer(Notas *p)
{
    Notas *aux = p;
    while(aux != NULL)
    {
        std::cout<<aux -> nota<<" "<<aux -> matricula<<"\n";
        aux = aux -> elo;
    }
};


