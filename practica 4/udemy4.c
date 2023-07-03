#include <stdio.h>
#include <stdlib.h>
int main(){
 float euros;

 printf("Introducza los euros para convertir\n");
 scanf("%f",&euros);

 printf("%.2f euros equivale a %.2f",euros,euros*166.386);
}