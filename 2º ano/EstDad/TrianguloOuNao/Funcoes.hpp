#include <iostream>
#include <cstdlib>
#include <cmath>

class Funcoes
{
private:
    float i,j,k;
public:
    bool triangulo(int,int,int);
    void qualtriangulo(int,int,int);

};

bool Funcoes::triangulo(int a,int b,int c)
{
    if(a<(b+c) || b<(c+a) || c<(b+a))
    {
        return true;
    }
    else
    {
        return false;
    }
};

void Funcoes::qualtriangulo(int a,int b, int c)
{
    if(triangulo(a,b,c))
    {
        if((a == b) && (a== c) && (c==b))
        {
            std::cout<<"Equilátero \n";
        }
        else if((a != b) && (a != c) && (c != b))
        {
            std::cout<<"Escaleno \n";
        }
        else
        {
            std::cout<<"Isósceles \n";
        }
    }
};



