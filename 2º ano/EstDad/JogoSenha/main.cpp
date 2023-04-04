using namespace std;
int main()
{
Senha J1;
char c[4], x[4], continua;
int i, n, tentativas;
do
{
system("cls");
for(i=0; i<4; i++)
{
n = J1.geraNumero();
c[i] = J1.cores[n];
}
tentativas = 0;

do
{
cout << endl << "informe sua jogada: " << tentativas+1 <<endl;
cout << endl << "v - vermelho ; a - azul ; p - preto ; b - branco" << endl;
for(i=0; i<4; i++)
{
cin >> x[i];
}
n = J1.acertos(c, x);
if(n ==4)
{
cout << endl << "Parabéns você acertou!!" << endl;
for(i=0; i<4; i++)
{
cout << " " << c[i];
}
tentativas = 10;
}
else
{
cout << endl << n << " acertos!!" << endl;
tentativas++;
if(tentativas==10)
{
cout << endl << "Você não acertou!! \n A senha era: " << endl;
for(i=0; i<4; i++)
{
cout << " " << c[i];
}
}
}
}
while(tentativas < 10);
cout << endl << "Deseja jogar outra partida? s/n ";
cin >> continua;
}
while(continua == 's');
return 0;
}
