#include "Ordenacao.hpp"

using namespace std;

int main(){
srand(time(NULL));
Ordenacao obj;
int troca, comp, tam=10, vet1[10], vet2[10], i;

for(i=0;i<10;i++){
vet1[i]=rand()%100;
}

for(i=0;i<10;i++){
vet2[i]=vet1[i];
}

troca=comp=0;

cout<<"Bolha"<<endl;
obj.Bolha(vet2,tam,&troca,&comp);
cout<<"\nForam realizadas: "<<troca<<" e "<<comp<<" comparacoes"<<endl;
for (i=0; i<10; i++){
vet2[i]=vet1[i];
}
troca=comp=0;

cout<<"\nBolhaMelhorado"<<endl;
obj.BolhaMelhorado(vet2,tam,&troca,&comp);
cout<<"\nForam realizadas: "<<troca<<" e "<<comp<<" comparacoes"<<endl;
for (i=0; i<10; i++){
vet2[i]=vet1[i];
}
troca=comp=0;

cout<<"\nSelecao"<<endl;
obj.Selecao(vet2,tam,&troca,&comp);
cout<<"\nForam realizadas: "<<troca<<" e "<<comp<<" comparacoes"<<endl;
for (i=0; i<10; i++){
vet2[i]=vet1[i];
}
troca=comp=0;

cout<<"\nInsercao"<<endl;
obj.Insercao(vet2,tam,&troca,&comp);
cout<<"\nForam realizadas: "<<troca<<" e "<<comp<<" comparacoes"<<endl;
for (i=0; i<10; i++){
vet2[i]=vet1[i];
}
troca=comp=0;

cout<<"\nShellsort"<<endl;
obj.Shellsort(vet2, tam, &troca, &comp);
cout<<"\nForam realizadas: "<<troca<<" trocas"<<" e "<<comp<<" comparacoes"<<endl;
for (i=0; i<10; i++){
vet2[i]=vet1[i];
}

return 0;
}

