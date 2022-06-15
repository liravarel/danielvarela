Utilize a ideia do ponteiro para função pela função qsort

#include<stdio.h>
#include<stdlib.h>
//Funcao que realiza a comparacao
int func_comp(float x, float y) {
//Cast para alterar os ponteiros const void *x e y para valores inteiros
//Se x<y retorna valor <0, se x=y retorna 0 e se x>y retorna >0
return ( x > y );
}
//Funcao para ordenar os floats do vetor
void func_ordena(float *vet, int n, int tam, int (*func_comp)(float, float))
{
for (int i = 0; i < n-1; i++)
{
for (int j = 0; j < n -1 -i; j++)
{ 
if (func_comp(vet[j], vet[j+1]))
{
float aux = vet[j];
vet[j] = vet[j+1];
vet[j+1] = aux;
} 
} 
}
} 
int main(){
int i, n, tam;
float *vet;
//Pede para que seja informado a quantidade de elementos a serem ordenados
printf("Digite um tamanho qualquer do vetor: ");
scanf("%d", &n);
//Aloca na memoria para o ponteiro vet
vet = (float*) malloc(n*sizeof(float));
//Atribui valores aos vetores
for(int i = 0; i < n; i++)
{
printf("Digite o valor na posicao em %d: ", i);
scanf("%f", &vet[i]); 
}
//Imprime o vet antes da ordenacao
printf("\n vetor antes da ordenacao: \n");
for(i = 0 ; i < n; i++ )
{
printf("%.2f ", vet[i]);
}
//Funcao func_ordena realiza a ordenacao
tam = sizeof(float);
func_ordena(vet, n, tam, func_comp);
//Imprime o vetor apos da ordenacao
printf("\nvetor apos ordenacao: \n");
for(i = 0 ; i < n; i++ ){
printf("%.2f ", vet[i]);
}
printf("\n");
return 0;
}
