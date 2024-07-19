#include <stdio.h>

int main() {
    int numero, cantidad_de_divisores=0;
printf("dame un numero y te dire si es primo\n");
scanf("%d", &numero);
for(int i = 1; i <= numero; i++) {
    if ((numero%i)==0) {
        cantidad_de_divisores++;
        }
        else {
            cantidad_de_divisores = cantidad_de_divisores;
        }
            
}
if (cantidad_de_divisores <= 2){
printf("Es primo");
}
else{
    printf("No es primo");
}
return 0;
}