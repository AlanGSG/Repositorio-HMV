#include<stdio.h>

int main(){

    int number;
    int min,max;
  
    printf("Introduzca el valor de M valor minimo en el rango: ");
    scanf("%d",&min);

    printf("Introduzca el valor de N valor maximo en el rango: ");
    scanf("%d",&max);

    printf("Los numeros impares en el rango indicado son: ");
    for(number = min;number <= max; number++)

         if(number % 2 !=0)
             printf("%d ",number);

    printf("\nLos numeros pares en el rango indicado son: ");
    for(number = min;number <= max; number++)

         if(number % 2 ==0)
             printf("%d ",number);
  
    return 0;
}
