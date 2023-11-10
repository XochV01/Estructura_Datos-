#include <stdio.h>

int main() {
    int i, pares[10], digito;
    char cuenta[10]; // Ajusté el tamaño para incluir el carácter nulo '\0'

    for (i = 0; i < 10; i++) // llenado con 10 primeros pares
        pares[i] = 2 * (i + 1);

    for (i = 9; i >= 0; i--) // imprimiendo el arreglo de forma inversa
        printf("|%d", pares[i]);
    printf("|\n");

    printf("\nPlease enter your account number >> "); // lectura de numero de cuenta
    fgets(cuenta, sizeof(cuenta), stdin);

    // Obteniendo el ultimo digito
    if (sscanf(&cuenta[8], "%1d", &digito) != 1) {
        printf("Invalid input for the last digit of the account number.\n");
        return 1;
    }

    printf("Modifying the number at index [%d] for -1\n", digito);

    if (digito >= 0 && digito < 10) {
        pares[digito] = -1; // realizando el cambio en el arreglo
    } else {
        printf("Invalid index for modification.\n");
        return 1;
    }

    for (i = 9; i >= 0; i--) // imprimiendo el arreglo de forma inversa
        printf("|%d", pares[i]);
    printf("|\n");

    getchar(); // Esperar la entrada del usuario antes de cerrar el programa

    return 0;
}

