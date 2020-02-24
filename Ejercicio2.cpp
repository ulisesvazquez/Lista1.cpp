#include<stdio.h>
#include<stdlib.h>
int main (){
int a,b;
printf("Introduce el primer numero:");
scanf("%d",&a);
printf("Introduce el segundo numero:");
scanf("%d",&b);
int c=a%2;
if(c==0){
printf("El numero si se puede vidivir ");
}
else{
printf ("El numero no se puede dividir ");
}
}

