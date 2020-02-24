#include<stdio.h>
#include<stdlib.h>
int main(){
int a;
float c;
printf("Introdusca la edad:");
scanf("%d",&a);

if(a<12){
c=0.4*75;
}
else if(a>60){
c=0.45*75;
}
else {
c=75;
}
printf("El costo del boleto es de: $%0.2f",c);
}
