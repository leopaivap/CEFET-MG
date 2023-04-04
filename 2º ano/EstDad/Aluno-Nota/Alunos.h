#include <iostream>
#include <cstdlib>

class Alunos
{
public:
    std::string nome;
    long long int matricula;
    Alunos *elo;
    Alunos* inserir(Alunos*, std::string, long long int);
    Alunos* remover(Alunos*);
    void percorer(Alunos*);
};

Alunos* Alunos::inserir(Alunos *p, std::string n, long long int matricula)
{
    Alunos *novo = new Alunos();
    novo -> nome = n;
    novo -> matricula = matricula;
    novo -> elo = p;
    return novo;
};

Alunos* Alunos::remover(Alunos *p)
{
    Alunos *aux = p;
    p = p -> elo;
    delete aux;
    return p;
};

void Alunos::percorer(Alunos *p)
{
    Alunos *aux = p;
    while(aux != NULL)
    {
        std::cout<<aux -> nome<<" "<<aux -> matricula<<"\n";
        aux = aux -> elo;
    }
};


