#include <stdio.h>

int main() {
    int dni;

    printf("Ingrese su DNI: ");
    scanf("%d", &dni);

    if(dni > 10 && dni < 100){
        printf("Su DNI es v%clido.", 160);
    } else {
        printf("Su DNI no es v%clido.", 160);
    }

    return 0;
}