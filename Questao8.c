Exemplo 1:
int main(){ int vet[] = {4,9,13}; int i; for(i=0;i<3;i++){ printf("%d ",*(vet+i)); } }
Resultado:
4,9 e 13
Na questão o compilador mostrou os mesmos valores, pois o ponteiro foi buscar essa função *(vet+i). Isso é o mesmo que {4,9 e 13}


Exemplo 2:

int main(){ int vet[] = {4,9,13}; int i; for(i=0;i<3;i++){ printf("%X ",vet+i); } }
Resultado:
1F745B50 1F745B54 1F745B58

Na questão diz que i=0; e i<3; ou seja o compilador entende que i será maior que 3, então compilou valores crescentes em 4 unidades, como: 0,4 e 8.

obs: O compilador começou no número 0 e seguiu uma ordem de 0,4 e 8
