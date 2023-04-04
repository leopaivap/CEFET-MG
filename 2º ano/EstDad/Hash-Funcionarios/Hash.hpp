#include <iostream>
#include <cstdlib>

class Hash
{
public:
    char tipo;
    std::string nome;
    std::string depto;
    int idade, i;
    float salario;
    Hash *prox;
    int funcao_hashing(char);
    void mostrar_hash(Hash*[]);
    void mostrar_tipo(Hash*[], char);
    void inserir(Hash*[], int, std::string, std::string, int, float);
    Hash* maisvelho(Hash*[]);
    Hash* menorsalario(Hash*[]);
    void contarProdutos(Hash*[], int*);

};

int Hash::funcao_hashing(char l)
{
    return (l)%4;
};

void Hash::mostrar_hash(Hash* tabela[])
{
    Hash *aux;
    for(i = 0; i < 4; i++)
    {
        aux = tabela[i];
        std::cout << aux -> depto << "\n";
        while(aux != NULL)
        {
            std::cout<< aux -> nome << aux -> idade << aux -> salario << "\n";
            aux = aux -> prox;
        }
    }
};

Hash* Hash::maisvelho(Hash *tabela[])
{
    Hash *aux, *resp = tabela[0];
    for( i = 0; i < 4; i++)
    {
        aux = tabela[i];
        while(aux != NULL)
        {
            if(aux -> idade > resp -> idade)
                resp = aux;
            aux = aux -> prox;
        }
    }
    return resp;
};

void Hash::inserir(Hash *tabela[], int pos, std::string n, std::string d, int i, float s)
{
    Hash *novo = new Hash();
    Hash *aux = tabela[pos];
    novo -> nome = n;
    novo -> depto = d;
    novo -> idade = i;
    novo -> salario = s;
    novo -> prox = NULL;
    if(aux == NULL)
        tabela[pos] = novo;
    else
    {
        Hash *ant = NULL;
        while((aux != NULL) && (novo -> nome > aux -> nome))
        {
            ant = aux;
            aux = aux -> prox;
        }
        if(ant == NULL)
        {
            novo -> prox = aux;
            tabela[pos] = novo;
        }
        else if(aux == NULL)
            ant -> prox = novo;
        else
        {
            ant -> prox = novo;
            novo -> prox = aux;
        }

    }

};

void Hash :: mostrar_tipo( Hash *tabela [], char t)
{
    Hash *aux ;
    bool achei = false ;
    for( int i =0; i < 4; i ++)
    {
        aux = tabela [i ];
        if( aux != NULL && aux -> tipo == t)
        {
            achei = true ;
            while( aux != NULL )
            {
                std :: cout << " Entrada " << i << " : " << aux -> tipo << " - " << aux -> depto << std :: endl ;
                aux = aux -> prox ;
            }
        }
    }
    if(!achei)
        std :: cout << " Não existe produtos para este tipo !!" << std :: endl ;
};
void Hash :: contarProdutos( Hash *tabela [], int* r)
{
    Hash * aux ;
    for( int i =0; i < 4; i ++)
    {
        aux = tabela [i];
        while( aux != NULL )
        {
            r[i]++;
            aux = aux -> prox ;
        }
    }
};



