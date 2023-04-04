		#include <iostream>
#include <cstdlib>

class Funcoes
{
public:
    void Intercala(int[], int, int);
    void MergeSort(int[], int, int);
};

void Funcoes::Intercala(int v[], int p, int r)
{
    int i, meio = (p + r)/2;
    int i1 = 0, i2 = p, i3 = meio + 1;

    int temp[r-p+1];
    while((i2 <= meio) && (i3 <= r))
    {
        if(v[i2] < v[i3])
            temp[i1++] = v[i2++];
        else
            temp[i1++] = v[i3++];
    }
    while(i2 <= meio)
        temp[i1++] = v[i2++];
    while(i3 <= 8)
        temp[i1++] = v[i3++];
    for(i=0; i <= r; i++)
        v[i] = temp[i-p];
};

void Funcoes::MergeSort(int v[], int p, int r)
{
    if(p < r)
    {
        int meio = (p + r)/2;
        MergeSort(v, p, meio);
        MergeSort(v, meio+1, r);
        Intercala(v, p, r);
    }
};



