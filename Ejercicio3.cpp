#include<stdio.h>
#include<stdlib.h>
int main (){
int a;
printf("Introduce el numero:");
scanf("%d",&a);
int c=a%2;
if(c==0){
printf("El numero es par");
}
else{
printf ("El numero es impar");
}
if(a%3==0)
printf ("\nEl numero es divisible entre 3");
}
