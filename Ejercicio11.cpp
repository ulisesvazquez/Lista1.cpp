#include<stdio.h>
#include<stdlib.h>
int main (){
float m,e,f;
float a,b,c,d;
printf("Ingrase las coordenadad les punto 1");
printf("\nIngrese el valor de x1:");
scanf("%f",&a);
printf("Ingrese el valor de y1:");
scanf("%f",&b);
printf("Ingrase las coordenadad les punto 2");
printf("\nIngrese el valor de x2:");
scanf("%f",&c);
printf("Ingrese el valor de y2:");
scanf("%f",&d);
e=(d-b);
f=(c-a);
if(f==0){
printf("La linea es vertical");
}
else if(f!=0){
m=e/f;
if (m>0){
printf("La pendiente es: %0.2f", m);
printf("\nLa recta crece");
}
else if (m<0){
printf("La pendiente es: %0.2f", m);
printf("\nLa recta decrece");
}
else {
(m==0);
printf("La pendiente es: %0.2f", m);
printf ("\nLa recta no tiene inclinacion");
}
}
}
