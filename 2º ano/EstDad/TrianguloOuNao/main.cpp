#include "Funcoes.hpp"

using namespace std;

int main()
{
    Funcoes F;
    float a,b,c,i;
    cout<<"Informe os lados do triângulo"<<endl;
    cin>>a>>b>>c;
    i=F.triangulo(a,b,c);
    if(i)
    {
        cout<<"Esse é um triângulo"<<" ";
        F.qualtriangulo(a,b,c);
    }
    else
    {
        cout<<"Não é um triângulo"<<endl;
    }
    return 0;
}

