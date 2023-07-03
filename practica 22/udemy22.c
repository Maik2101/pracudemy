#include <stdio.h>
#include <stdlib.h>

int main() {
struct hora_entrada {
    int hora;
    int minuto;
};

struct entrada {
    struct hora_entrada hora1;
    int asistentes;
    float precio;
};


    struct entrada el;
    char continuar = 's';

    while (continuar == 's') {
        printf("Introduce la hora de entrada(hora minuto):\n ");
        scanf("%d" , &el.hora1.hora);
        printf("Introduce la hora de entrada(hora minuto):\n ");
scanf("%d", &el.hora1.minuto);
        printf("Introduce el numero de asistentes: ");
        scanf("%d", &el.asistentes);

        int total = 0;
        for (int i = 0; i < el.asistentes; i++) {
            int edad;
            printf("Introduce la edad del asistente %d: ", (i + 1));
            scanf("%d", &edad);

            if (edad < 6) {
                total += 0;
            } else if (edad >= 6 && edad <= 15) {
                total += 5;
            } else if ((edad >= 16 && edad <= 26) || edad > 65) {
                total += 8;
            } else {
                total += 10;
            }
        }

        if (el.asistentes >= 5) {
            el.precio = total - total * 0.1;
        } else {
            el.precio = total;
        }
        printf("Hora de entrada del grupo: %d\n", el.hora1.hora);
        printf("Minuto de entrada del grupo: %d\n", el.hora1.minuto);
        printf("Precio de las entradas del grupo: %.2f\n", el.precio);

        printf("Quiere continuar con otro grupo? (s/n): ");
      
        scanf(" %c", &continuar); 
        while (continuar == '\n'){
            scanf(" %c", &continuar);
        }

    }

    printf("Hasta la proxima.......\n");

    return 0;
}