# Seja o seguinte trecho de programa: 
int i=3,j=5;  int *p, *q; p = &i; q = &j;
 p == &i; = (0x28ff44(endereço de i))
 *p - *q; = (3-5=-2)
 **&p; = (3) 
*p/(*q) + 7; = ((3)/5+7=3/12)
