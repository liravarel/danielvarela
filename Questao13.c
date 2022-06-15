Fazer um vetor de ordem crescente, apartir do comando float

#include <stdio.h>
#define MAX 3

int main()
{

float x[MAX];
int i, j, temp;
for (i = 0; i<MAX; i++)
{
printf("Digite um numero\t:");
scanf("%f",&x[i]); 
}
for (i=0;i<MAX; i++)
for(j=i+1;j<MAX;j++)
{
if (x[i]>x[j])
{
temp=x[i];
x[i]=x[j];
x[j]=temp;
}
}
printf("\n");
printf("Vetor em ordem crescente: \n");
for(i=0;i<MAX;i++)
printf(" %f",x[i]);
printf("\n");
}
