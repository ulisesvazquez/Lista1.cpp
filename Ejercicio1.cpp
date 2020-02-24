#include<stdio.h>
#include<stdlib.h>
int main (){

int u;
printf("Introduce un numero:");
scanf("%d",&u);
if(u<100){
printf("Error, El numero es menor a 100");
}
else if(u==100){
printf("Error, El numero es igual a 100");
}
else if(u>100){
printf("Correcto, El numero es mayor a 100");
}

}


