#include "Alunos.h"
#include "Notas.h"

using namespace std;

int main()
{
    Alunos *topoaluno = NULL, obj1;
    Notas  *toponotas = NULL, obj2;
    string nome;
    int i = 0, j;
    long long int matricula;
    int op;
    float nota;
    do{
        cout<<"1 - Cadastrar Aluno \n";
        cout<<"2 - Cadastrar Notas \n";
        cout<<"3 - Calcular Média de um Aluno \n";
        cout<<"4 - Listar os Nomes dos Alunos sem Nota \n";
        cout<<"5 - Excluir Aluno \n";
        cout<<"6 - Excluir Nota \n";
        cout<<"7 - Sair \n";
        cin>>op;
        system("clear");

        switch(op){
    case 1:
        cout<<"Informe o nome: \n";
        cin>>nome;
        i++;
        topoaluno = obj1.inserir(topoalunos, nome, i);
        break;
    case 2:
        cout<<"Informe a nota \n";
        cin>>nota;
        toponotas = obj2.inserir(toponotas,nota,i);
        break;
    case 3:
    case 4:
        while(j <= i){
            if(toponotas -> nota == NULL){
                obj1.percorer(topoaluno);
            }
        }
        }
        break;
    case 5:
       obj


    }
    return 0;
}


