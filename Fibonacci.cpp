/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int fibon(int i)

 {
    if (i==0) /* condição n=0, F(0)=0 */
          return 0; 
      else
        if (i==1) /* condição n=1, F(1)=1  */
            return 1;
        else
            return fibon(i-1)+fibon(i-2); /* condição n>1 */
    }
int main(){
    int i,n;
    cout << "Digite a n-ésima posição da série de Fibonacci: " <<endl; /* Aqui o usuário entra com a posição desejada */
    cin>>n;
    /* for (i=2;i<=n;i++)
    cout << fibon(i) <<endl; */ /* Imprime cada termo da série, se desejar*/
    cout << "O termo F("<<n<<") da série de Fibonacci é "<< fibon(n) <<endl; /* Resposta*/

    return 0;
} 
