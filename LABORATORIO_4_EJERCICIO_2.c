#include <stdio.h>

int main() {
    float lab1, lab2, lab3, examen, proyecto, nota_final;

    printf("Ingrese nota del Laboratorio 1 (sobre 100): ");
    scanf("%f", &lab1);
    printf("Ingrese nota del Laboratorio 2 (sobre 100): ");
    scanf("%f", &lab2);
    printf("Ingrese nota del Laboratorio 3 (sobre 100): ");
    scanf("%f", &lab3);
    printf("Ingrese nota del Examen Teorico (sobre 100): ");
    scanf("%f", &examen);
    printf("Ingrese nota del Proyecto Final (sobre 100): ");
    scanf("%f", &proyecto);

    nota_final = (lab1 * 0.15) + (lab2 * 0.15) + (lab3 * 0.15) + (examen * 0.35) + (proyecto * 0.20);

    printf("\nPromedio final ponderado: %.2f\n", nota_final);

    return 0;
}
