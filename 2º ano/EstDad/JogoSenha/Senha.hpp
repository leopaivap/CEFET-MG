#include <iostream>
#include <cstdlib>
class Senha
{
public:
char cores[4] = {'v','a','p','b'};
Senha(void);
int geraNumero();
int acertos (char [], char[]);
};
Senha :: Senha(void)
{
srand(time(NULL));
};
int Senha:: geraNumero()
{
return rand()%4;
};
int Senha :: acertos(char c[], char x[])
{
int k, r=0;
for (k=0; k<4; k++)
{
if(c[k] == x[k])
{
r++;
}
}
return r;
};
