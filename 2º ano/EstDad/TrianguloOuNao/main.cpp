#include "Funcoes.hpp"

using namespace std;

int main()
{
    Funcoes F;
    float a,b,c,i;
    cout<<"Informe os lados do tri�ngulo"<<endl;
    cin>>a>>b>>c;
    i=F.triangulo(a,b,c);
    if(i)
    {
        cout<<"Esse � um tri�ngulo"<<" ";
        F.qualtriangulo(a,b,c);
    }
    else
    {
        cout<<"N�o � um tri�ngulo"<<endl;
    }
    return 0;
}

