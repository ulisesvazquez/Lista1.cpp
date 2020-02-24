#include<stdio.h>
#include<stdlib.h>
int main(){
int opt;
int a,b,c,d,e,f,g,h,i,j;
printf("1.Calcular area de un triangulo \n2.Calcular el area de un trapecio \n3.Calcular el area de un rectangulo");
printf("\nSeleccione una opcion:");
scanf("%d",&opt);
switch (opt){
case 1:
printf("Ingrese la base:");
scanf("%d",&a);
printf("Ingrese la altura:");
scanf("%d",&b);
c=(a*b)/(2);
printf("El area del triangulo es %d",c);
break;
case 2:
printf("Ingrese el lado a:");
scanf("%d",&d);
printf("Ingrese el lado b:");
scanf("%d",&e);
printf("Ingrese la altura:");
scanf("%d",&f);
g=(f)*(d+e)/(2);
printf("El area del trapecio es %d",g);
break;
case 3:
printf("Ingrese la base:");
scanf("%d",&h);
printf("Ingrese la altura:");
scanf("%d",&i);
j=h*i;
printf("El area del cuadrado es %d",j);
break;
}
}
