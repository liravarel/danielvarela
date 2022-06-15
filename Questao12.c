O uso de ponteiros para funções em C serve principalmente para definir, em tempo de execução, qual função será executada
sem a necessidade de escrever o nome da função, de forma explícita naquele ponto de código.
ex:

int *px, x, y;
x= 2;
px= &x;
y= *px;

ex:
int funcao (int a) {
   return a+1;
}
int main (void) {
int (*pf) (int) = & função;
printf (“valor = %d” , pf (1) ) ;
}
