Admitindo que o i=4094,o programa compilou a seguinte código: 
int main(void) {
 int i=4094, *p; 
p=&i;
 printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4); 
return 0;
 } O programa compilou quando i=5 o seguinte: 
0000 ffe 7 5 15 9.
 O programa compilou quando i=4094 o seguinte: 
4096, 4094, 12282 e 4098.
 Somou 4094 + 2, multiplicou 4094 por 3x e depois somou 4094+4.
