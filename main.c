/*
*Hubert Kaczanowski
*zajecia:2024.06.05
*Temat:Projekt koncowy
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "logarytm.h"
#include "laczenie.h"
#include "d2b.h"
#include "obliczenia.h"


int main() {
    int wybor;
    float a, b, result;
    char hex[20];
    int l = 0;
    int rozmiarTablicy;
    int h, k;


    do {
        printf("\nWybierz opcje:\n");
        printf("1. Obliczanie logarytmow\n");
        printf("2. Formatowanie imion i nazwisk\n");
        printf("3. kalkulator dziesietny na binarny\n");
        printf("4. kwadrat oraz pierwiastek liczby n\n");
        printf("0. Wyjscie\n");

        printf("Twoj wybor: ");
        scanf("%d", &wybor);

        switch (wybor) {
            case 1: {
                double m;
                printf("Podaj gorny kres przedzialu obliczen: ");
                scanf("%lf", &m);

                double log_values[(int)(m / 0.1) + 1];
                oblicz_logarytmy(m, log_values);
                logarytm(m, log_values);
                break;
            }
            case 2:
                laczenie();
                break;
            case 3: {
                int binary[32];

                printf("Bitowa postac liczby calkowitej\n");
                printf("n = ");
                scanf("%i", &l);

                d2b(l, binary);

                printf("Postac binarna liczby %i: ", l);
                for(int i = 0; i < 32; i++) {
                    printf("%i", binary[i]);
                }
                printf("\n");

                break;
            }
            case 4:
                wykonajObliczenia();
                break;

            default:
                if (wybor != 0)
                    printf("Niepoprawny wybor.\n");
                break;
        }

    } while (wybor !=0);

    return 0;
}
