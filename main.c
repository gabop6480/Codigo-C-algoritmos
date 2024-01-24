#include <stdio.h>

int main() {
    // Se definen las variables a utilizar
    int Votos, TotalVotos = 0, Cand1 = 0, Cand2 = 0, Cand3 = 0, Cand4 = 0, Cand5 = 0;
    float Porcentaje1, Porcentaje2, Porcentaje3, Porcentaje4, Porcentaje5;

    do {
        printf("Ingrese el voto al candidato (del 1 al 5, 0 para terminar el conteo): ");
        scanf("%d", &Votos);

        if (Votos == 1) {
            Cand1++;
        } else if (Votos == 2) {
            Cand2++;
        } else if (Votos == 3) {
            Cand3++;
        } else if (Votos == 4) {
            Cand4++;
        } else if (Votos == 5) {
            Cand5++;
        } else if (Votos > 5 || Votos < 0) {
            printf("Error de datos. Ingrese de nuevo.\n");
            continue;
        }

        if (Votos != 0) {
            TotalVotos++;
        }

    } while (Votos != 0);

    // Se saca el porcentaje de todos los candidatos
    Porcentaje1 = (Cand1 * 100.0) / TotalVotos;
    Porcentaje2 = (Cand2 * 100.0) / TotalVotos;
    Porcentaje3 = (Cand3 * 100.0) / TotalVotos;
    Porcentaje4 = (Cand4 * 100.0) / TotalVotos;
    Porcentaje5 = (Cand5 * 100.0) / TotalVotos;

    // Se muestra la cantidad de votos de cada candidato y los porcentajes de votos de cada candidato
    printf("Votos del candidato 1: %d. Porcentaje de votos del candidato 1: %.2f%%\n", Cand1, Porcentaje1);
    printf("Votos del candidato 2: %d. Porcentaje de votos del candidato 2: %.2f%%\n", Cand2, Porcentaje2);
    printf("Votos del candidato 3: %d. Porcentaje de votos del candidato 3: %.2f%%\n", Cand3, Porcentaje3);
    printf("Votos del candidato 4: %d. Porcentaje de votos del candidato 4: %.2f%%\n", Cand4, Porcentaje4);
    printf("Votos del candidato 5: %d. Porcentaje de votos del candidato 5: %.2f%%\n", Cand5, Porcentaje5);

    return 0;
}
