#include <stdio.h>
#include <string.h>
#include <ctype.h>

int rec(int ninf, int nsup);

int main()
{
   int linf=1, lsup=100;
   int n=0, resp;
   char op='a';
  
   printf("\n Pense num numero inteiro entre 1 e 100.\n");
   resp=rec(linf, lsup);   
   printf("Resposta: %d\n", resp);

   return(0);
}

int rec(int ninf, int nsup)
{
   int limiar, lixo;
   int resp;
   char op='a';
   
   limiar=(nsup-ninf+1)/2;
   
   if ( limiar == 0 ) return(ninf);
   
   printf("\nEh maior ou igual a %d? (s/n) ==> ", ninf+limiar);   
   scanf(" %c", &op);
   lixo=fflush(stdin); op=tolower(op);
  
   if ( op == 's')
      resp=rec(ninf+limiar, nsup);
   else
      resp=rec(ninf, nsup-limiar);

   return(resp);
}

