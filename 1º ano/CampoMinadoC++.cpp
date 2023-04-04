//------------------------PROJETO FINAL--------------------------
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main()
{
    int l,c,q,aux,m[20][20],n[20][20],g[20][20],i,j,d,ale01,ale02,a,t;
    char start;
    srand(unsigned (time(NULL)));
    cout<<"     ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ?"<<endl;
    cout<<"     ?  _______       ___                  ______    ______  ?"<<endl;
    cout<<"     ? |             /   |   ||       ||  |      |  |      | ?"<<endl;
    cout<<"     ? |            /    |   | |     | |  |      |  |      | ?"<<endl;
    cout<<"     ? |           /_____|   |  |   |  |  |______|  |      | ?"<<endl;
    cout<<"     ? |          /      |   |   | |   |  |         |      | ?"<<endl;
    cout<<"     ? |_______  /       |   |    |    |  |         |______| ?"<<endl;

    cout<<"     ?              °                ___    _____    _____   ?"<<endl;
    cout<<"     ? ||       ||  |  ||    |      /   |  |     |  |     |  ?"<<endl;
    cout<<"     ? | |     | |  |  | |   |     /    |  |     |  |     |  ?"<<endl;
    cout<<"     ? |  |   |  |  |  |  |  |    /_____|  |     |  |     |  ?"<<endl;
    cout<<"     ? |   | |   |  |  |   | |   /      |  |     |  |     |  ?"<<endl;
    cout<<"     ? |    |    |  |  |    ||  /       |  |____/   |_____|  ?"<<endl;
    cout<<"     ?                                                       ?"<<endl;
    cout<<"     ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ?"<<endl;

    cout<<"  "<<endl;

    cout<<"         Desenvolvido por: O GRANDE TUTU E O FENOMENAL LEO"<<endl;
    cout<<"                Pressione algum botão para iniciar"<<endl;
    cin>>start;
    system("cls");
    if(start!='ç' && start != '´' && start !='~')
    {
        cout<<"    ++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<"    |       ESCOLHA A DIFICULDADE:      |"<<endl;
        cout<<"    |           1-IZI               	|"<<endl;
        cout<<"    |           2-MÁOUMÊNO              |"<<endl;
        cout<<"    |           3-LOKAAAAAAASXÇO        |"<<endl;
        cout<<"    +++++++++++++++++++++++++++++++++++++"<<endl;
        cin>>d;
        system("cls");

        ale01=ale02=0;

        for(i=0; i<20; i++)
        {
            for(j=0; j<20; j++)
            {
                m[i][j]=0;
            }
        }

//--------- QUEM VE CARA NÃO VE CORAÇÃO---------------
        for(i=0; i<20; i++)
        {
            for(j=0; j<20; j++)
            {
                n[i][j]=9;
            }
        }
//--------------------DIFICULDADE--------------------------------
        if(d==1)
        {
            i=0;
            t=360;
            while(i<40)
            {
                ale01=rand()%20;
                ale02=rand()%20;

                if(m[ale01][ale02]==0)
                {
                    m[ale01][ale02]=7;
                    i++;
                }
            }
        }
        else if(d==2)
        {
            i=0;
            t=320;
            while(i<80)
            {
                ale01=rand()%20;
                ale02=rand()%20;

                if(m[ale01][ale02]==0)
                {
                    m[ale01][ale02]=7;
                    i++;
                }

            }

        }
        else if(d==3)
        {
            i=0;
            t=300;
            while(i<100)
            {
                ale01=rand()%20;
                ale02=rand()%20;

                if(m[ale01][ale02]==0)
                {
                    m[ale01][ale02]=7;
                    i++;
                }
            }
        }
        else
        {
            cout<<"        Dificuldade inválida! Tente novamente"<<endl;
            cout<<"       -Pressione enter para fechar o programa-";

        }
        for(i=0; i<20; i++)
        {
            for(j=0; j<20; j++)
            {
                g[i][j]=m[i][j];
            }
        }

        if(d==1 || d==2 || d==3)
        {
            //-------- ENQUADRANDO MATRIZ-----------

            for(i=0; i<20; i++)
            {
                for(j=0; j<20; j++)
                {
                    cout<<n[i][j]<<"  ";
                }
                cout<<endl;
            }
//---------------PERTO DA BOMBA---------------------

            for (i=1; i<19; i++)
            {
                for(j=1; j<19; j++)
                {
                    if(m[i][j]==7)
                    {
                    }
                    else
                    {
                        if(m[i-1][j]==7)
                        {
                            m[i][j]=m[i][j]+1;

                        }
                        if(m[i+1][j]==7)
                        {
                            m[i][j]=m[i][j]+1;

                        }
                        if(m[i][j-1]==7)
                        {
                            m[i][j]=m[i][j]+1;

                        }
                        if(m[i][j+1]==7)
                        {
                            m[i][j]=m[i][j]+1;

                        }
                    }
                }
            }
            for (i=0; i<20; i++)
            {
                if(m[i][19]==7)
                {
                }
                else
                {
                    if(m[i-1][19]==7)
                    {
                        m[i][19]=m[i][19]+1;

                    }
                    if(m[i+1][19]==7)
                    {
                        m[i][19]=m[i][19]+1;

                    }
                    if(m[i][19-1]==7)
                    {
                        m[i][19]=m[i][19]+1;

                    }

                }
            }
            for(j=0; j<20; j++)
            {
                if(m[19][j]==7)
                {
                }
                else
                {
                    if(m[19-1][j]==7)
                    {
                        m[19][j]=m[19][j]+1;

                    }
                    if(m[19][j-1]==7)
                    {
                        m[19][j]=m[19][j]+1;

                    }
                    if(m[19][j+1]==7)
                    {

                    }
                }
            }
            for (i=0; i<20; i++)
            {
                if(m[i][0]==7)
                {
                }
                else
                {
                    if(m[i-1][0]==7)
                    {
                        m[i][0]=m[i][0]+1;

                    }
                    if(m[i+1][0]==7)
                    {
                        m[i][0]=m[i][0]+1;

                    }
                    if(m[i][0+1]==7)
                    {
                        m[i][0]=m[i][0]+1;

                    }
                }
            }
            for(j=1; j<19; j++)
            {
                if(m[0][j]==7)
                {
                }
                else
                {
                    if(m[0+1][j]==7)
                    {
                        m[0][j]=m[0][j]+1;

                    }
                    if(m[0][j-1]==7)
                    {
                        m[0][j]=m[0][j]+1;

                    }
                    if(m[0][j+1]==7)
                    {
                        m[0][j]=m[0][j]+1;

                    }
                }
            }
            q=-1;
            a=0;
            while(q<0)
            {
                if(a<t)
                {
                    cout<<"Informe a linha: ";
                    cin>>l;
                    cout<<endl;
                    cout<<"Informe a coluna: ";
                    cin>>c;
                    cout<<endl;

                    aux=m[l][c];
                    n[l][c]=aux;
                    system("cls");
                    for(i=0; i<20; i++)
                    {
                        for(j=0; j<20; j++)
                        {
                            cout<<n[i][j]<<"  ";
                        }
                        cout<<endl;
                    }
                    if(m[l][c]==7)
                    {
                        system("cls");
                        cout<<"VOCÊ ACHOU UMA BOMBA!!! GAMER OVER...PERDEU OTÁRIO"<<endl;

                        cout<<endl;
                        cout<<endl;

                        for(i=0; i<20; i++)
                        {
                            for(j=0; j<20; j++)
                            {
                                cout<<g[i][j]<<"  ";
                            }
                            cout<<endl;
                        }
                        cout<<"        Pressione enter para fechar o programa"<<endl;
                        cout<<"                  !OBS: 7 = bomba!";
                        cout<<endl;
                        q++;
                    }
                    else
                    {
                        a++;
                    }
                }
                else
                {
                    system("cls");
                    cout<<"PARABÉNS MEU CONSAGRADO VOCÊ GANHOU!";

                    q++;
                }
            }
        }

    }
    else
    {
        cout<<"ESTA NÃO IDIOTA, COMEÇA DE NOVO";
    }
    return 0;
}


