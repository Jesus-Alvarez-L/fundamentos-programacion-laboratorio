#include <stdio.h>

int main() {
    float r, h, area_lateral, volumen;
    const float PI = 3.14159265;

    printf("Ingrese el radio (r) del cilindro: ");
    scanf("%f", &r);
    printf("Ingrese la altura (h) del cilindro: ");
    scanf("%f", &h);

    area_lateral = 2 * PI * r * h;
    volumen = PI * r * r * h;

    printf("\n--- RESULTADOS ---\n");
    printf("Area Lateral: %.2f\n", area_lateral);
    printf("Volumen: %.2f\n", volumen);

    return 0;
}
