#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
struct agenda
{
    string nome;
    string telefone;
    string email;
    int vazio;
};
int o,g;
int menu(int o)
{
    system("cls");

    cout<<"-----Agenda-----"<<endl;
    cout<<endl;
    cout<<"1-Criar contato"<<endl;
    cout<<"2-Excluir contato"<<endl;
    cout<<"3-Procurar contato"<<endl;
    cout<<"4-Listar contatos"<<endl;
    cout<<"9-Sair"<<endl;
    cout<<endl;
                cout<<"Contatos: "<<g<<"/100"<<endl;
    cout<<endl;
    cout<<"Desenvolvido por Juan Miguel e Leonardo Paiva!"<<endl;
    cin>>o;
    return o;

}
int main()
{
    int i,j,aux,q,d,y;
    char l;
    i=j=aux=q=d=0;
    string nome,x,v;
    struct agenda contato[100];

    for(i=0; i<100; i++)
    {
        contato[i].nome = "------";
        contato[i].telefone = "-----";
        contato[i].email = "-----";
        contato[i].vazio = 0;
    }
    o=menu(o);
    while(o!=9)
    {
if(g<=100){
        if(o==1)
        {
            system("cls");
            for(i=0; i<100; i++)
            {
                if(contato[i].vazio == 0)
                {
                    aux = i;
                    i=200;
                }
            }
            cout<<"Informe o nome do contato:"<<endl;
            cin>>contato[aux].nome;
            cout<<"Informe o telefone:"<<endl;
            cin>>contato[aux].telefone;
            cout<<"Informe email:"<<endl;
            cin>>contato[aux].email;
            contato[aux].vazio = 1;
            q++;
            system("cls");
            o=menu(o);
            g++;

        }
        }else{
        system("cls");
        cout<<"Agenda cheia"<<endl;
        cout<<"Pressione um botão para voltar ao menu"<<endl;
        cin>>l;
        o=menu(o);
        }
        if(o==2)
        {
            system("cls");
            cout<<"Informe o contato que deseja excluir"<<endl;
            cin>>nome;
            for(i=0; i<100; i++)
            {
                if(nome == contato[i].nome)
                {
                    j = i;
                    i=200;
                }
            }
            contato[j].nome = "-----";
            contato[j].telefone = "-----";
            contato[j].email = "-----";
            contato[j].vazio = 0;

            for(y=j; y<q; y++)
            {
                contato[j].nome = contato[j+1].nome;
                contato[j].telefone = contato[j+1].telefone;
                contato[j].email = contato[j+1].email;
                contato[j].vazio = contato[j+1].vazio;

                if(y == q-1)
                {
                    contato[j+1].nome = "-----";
                    contato[j+1].telefone = "-----";
                    contato[j+1].email = "-----";
                    contato[j+1].vazio = 0;
                }
            }
            g--;
            o=menu(o);

        }
        if(o==3)
        {
            system("cls");
            cout<<"Informe o nome do contato a ser procurado:"<<endl;
            cin>>v;
            system("cls");
            for(i=0; i<100; i++)
            {
                if(v == contato[i].nome)
                {
                    cout<<"Nome: "<<contato[i].nome<<endl;
                    cout<<"Telefone: "<<contato[i].telefone<<endl;
                    cout<<"Email: "<<contato[i].email<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<"Pressione algum botão para voltar ao menu:"<<endl;
                    cin>>l;
                    o=menu(o);
                }
            }
        }
        if(o==4)
        {
            d=1;
            system("cls");
            cout<<"-----Sua lista de contatos-----"<<endl;
            cout<<endl;
            cout<<"Contatos: "<<g<<"/100"<<endl;
            cout<<endl;
            for(i=0; i<100; i++)
            {
                cout<<d<<" -> "<<contato[i].nome<<endl;
                d++;
            }
            cout<<"Pressione algum botão para voltar ao menu:"<<endl;
            cin>>l;
            o=menu(o);

        }
        if(o!=1 && o!=2 && o!=3 && o!=4 && o!=9){
        system("cls");
        cout<<"COMANDO INVALIDO...TRY AGAIN"<<endl;
        cout<<"Pressione um botão para voltar ao menu"<<endl;
        cin>>l;
        o=menu(o);
        }
    }
    return 0;

}




