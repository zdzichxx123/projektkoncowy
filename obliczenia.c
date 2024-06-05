#include "obliczenia.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void wykonajObliczenia() {
    int liczba;
    printf("Prosze podanie liczby calkowitej z zakresu od 0 do 100:\n?> ");
    scanf("%d", &liczba);

    while (liczba < 0 || liczba > 100) {
        printf("Podana liczba nie nalezy do zakresu <0,100>. Prosze podanie innej liczby:\n?> ");
        scanf("%d", &liczba);
    }

    int rozmiar = liczba + 1;
    Wyniki *tablicaWynikow = malloc(rozmiar * sizeof(Wyniki));

    for (int i = 0; i < rozmiar; i++) {
        tablicaWynikow[i].wartosc = i;
        tablicaWynikow[i].kwadrat = i * i;
        tablicaWynikow[i].pierwiastek = sqrt(i);
    }

    printf("Wyniki obliczen:\n");
    for (int i = 0; i < rozmiar; i++) {
        printf("Liczba = %d, Kwadrat = %d, Pierwiastek = %.6f\n",tablicaWynikow[i].wartosc,tablicaWynikow[i].kwadrat,tablicaWynikow[i].pierwiastek);
    }

    free(tablicaWynikow);
}

