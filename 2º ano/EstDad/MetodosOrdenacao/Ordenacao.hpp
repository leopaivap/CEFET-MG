#include <iostream>
#include <cstdlib>
#include <cmath>

class Ordenacao
{
private:
    int i, j, aux, troca, eleito, menor, pos, comp, v1[10], v2[10];
public:
    void Bolha (int[], int, int*, int*);
    void BolhaMelhorado (int[], int, int*, int*);
    void Selecao (int [], int, int*, int*);
    void Insercao (int[], int, int*, int*);
};

void Ordenacao::Bolha (int v[], int tam, int*t, int *c)
{
    std::cout<<" Vetor Original \n";
    for (i=0; i<tam; i++)
    {
        std::cout<<v[i]<<" ";
    }
    for (i=0; i<tam; i++)
    {
        for (j=0; j<tam; j++)
        {
            if (v[j]>v[j+1])
            {
                (*t)++;
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
            (*c)++;
        }
    }
    std::cout<<"\n Vetor Ordenado \n";
    for (i=0; i<tam; i++)
    {
        std::cout<<v[i]<<" ";
    }
};

void Ordenacao::BolhaMelhorado (int v[], int tam, int*t, int*c)
{
    std::cout<<" Vetor Original \n";
    for (i=0; i<tam; i++)
    {
        std::cout<<v[i]<<" ";
    }
    i=1;
    troca=true;
    while ((i<=tam) && (troca))
    {
        troca=false;
        for (j=0; j<tam-1; j++)
        {
            if (v[j]>v[j+1])
            {
                (*t)++;
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
                troca = true;
            }
            (*c)++;
        }
        i++;
    }
    std::cout<<"\n Vetor Ordenado \n";
    for (i=0; i<tam; i++)
    {
        std::cout<<v[i]<<" ";
    }
};

void Ordenacao::Selecao(int v[], int tam, int *t, int*c)
{
    std::cout<<"Vetor Original \n";
    for (i=0; i<tam; i++)
    {
        std::cout<<v[i]<<" ";
    }
    for (i=0; i<tam-1; i++)
    {
        eleito = v[i];
        menor = v[i+1];
        pos = i+1;
        for (j=i+1; j<tam-1; j++)
        {
            if (v[j]<menor)
            {
                menor = v[j];
                pos = j;
                (*t)++;
            }
            (*c)++;
        }
        (*c)++;
        if (menor < eleito)
        {
            v[i] = v[pos];
            v[pos] = eleito;
            (*t)++;
        }

    }
    std::cout<<"\n Vetor Ordenado \n";
    for (i=0; i<tam; i++)
    {
        std::cout<<v[i]<<" ";
    }

};

void Ordenacao:: Insercao (int v[], int tam, int*t, int *c)
{
    std::cout<<"Vetor Original \n";
    for (i=0; i<tam; i++)
    {
        std::cout<<v[i]<<" ";
    }
    for (i=1; i<tam; i++)
    {
        eleito = v[i];
        j = i-1;
        while ((j>=0) && (v[j]>eleito))
        {
            (*c)++;
            (*t)++;
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = eleito;
        (*t)++;

    }
    std::cout<<"\n Vetor Ordenado \n";
    for (i=0; i<tam; i++)
    {
        std::cout<<v[i]<<" ";
    }
};

