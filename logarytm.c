#include "logarytm.h"
#include <stdio.h>
#include <math.h>

void oblicz_logarytmy(double m, double *log_values) {
    if (m <= 0) {
        printf("Gorny kres przedzialu musi byc wiekszy niz 0.\n");
        return;
    }

    int n = (int)(m / 0.1) + 1;

    for (int i = 0; i < n; i++) {
        double x = i * 0.1;
        log_values[i] = log10(x);
    }
}

void logarytm(double m, double *log_values) {
    int n = (int)(m / 0.1) + 1;

    printf("Wyniki obliczen logarytmow dziesietnych:\n");
    for (int i = 0; i < n; i++) {
        double x = i * 0.1;
        printf("log10(%.1lf) = %lf\n", x, log_values[i]);
    }
}


