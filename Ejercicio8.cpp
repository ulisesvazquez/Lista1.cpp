#include<stdio.h>
#include<stdlib.h>
int main (){
int a,b,c;
printf("Introduce el primer digito:");
scanf("%d",&a);
printf("Introduce el segundo digito:");
scanf("%d",&b);
printf("Introduce el tercer digito:");
scanf("%d",&c);

if (a<b && a<c && b<c){
printf("%d", a);
printf("%d", b);
printf("%d", c);
}
else if (a<b && a<c && c<b){
printf("%d", a);
printf("%d", c);
printf("%d", b);
}
else if (b<c && b<a && c<a){
printf("%d", b);
printf("%d", c);
printf("%d", a);
}
else if (b<c && b<a && a<c){
printf("%d", b);
printf("%d", a);
printf("%d", c);
}
else if (c<a && c<b && a<b){
printf("%d", c);
printf("%d", a);
printf("%d", b);
}
else {
(c<a && c<b && b<a);
printf("%d", c);
printf("%d", b);
printf("%d", a);
}
}



