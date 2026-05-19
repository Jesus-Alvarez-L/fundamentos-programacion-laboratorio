#include <stdio.h>

int main() {
    char nombre[50];
    int antiguedad;
    float sueldo_basico, bono = 0, total_ganado;
    float descuento_afp, rc_iva = 0, salario_neto;

    printf("Ingrese el nombre del trabajador: ");
    scanf("%s", nombre);
    printf("Ingrese los anos de antiguedad: ");
    scanf("%d", &antiguedad);
    printf("Ingrese el sueldo basico (Bs): ");
    scanf("%f", &sueldo_basico);

    if (antiguedad > 5) {
        bono = sueldo_basico * 0.10;
    }

    total_ganado = sueldo_basico + bono;

    descuento_afp = total_ganado * 0.1271;

    if (total_ganado > 9500) {
        rc_iva = (total_ganado - 9500) * 0.13;
    }

    salario_neto = total_ganado - descuento_afp - rc_iva;

    printf("\n--- BOLETA DE SUBSIDIO ---\n");
    printf("Trabajador: %s\n", nombre);
    printf("Sueldo Basico: %.2f Bs\n", sueldo_basico);
    printf("Bono Antiguedad: %.2f Bs\n", bono);
    printf("Total Ganado: %.2f Bs\n", total_ganado);
    printf("Descuento AFP (12.71%%): %.2f Bs\n", descuento_afp);
    printf("Descuento RC-IVA: %.2f Bs\n", rc_iva);
    printf("---------------------------\n");
    printf("SALARIO NETO: %.2f Bs\n", salario_neto);

    return 0;
}
