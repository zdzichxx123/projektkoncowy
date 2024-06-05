#include "laczenie.h"
#include <stdio.h>
#include <string.h>

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void laczenie() {
    int limit = 20;
    char forma[limit];
    char imie[limit];
    char nazwisko[limit];
    char opis0[] = "Forma grzecznosciowa (Pan/Pani): ";
    char opis1[] = "Sz. ";
    char opis2[] = "Imie: ";
    char opis3[] = "Nazwisko: ";

    printf("%s", opis0);
    scanf("%s", forma);

    clear_input_buffer();
    printf("%s", opis2);
    fgets(imie, limit, stdin);
    imie[strcspn(imie, "\n")] = '\0';

    printf("%s", opis3);
    fgets(nazwisko, limit, stdin);
    nazwisko[strcspn(nazwisko, "\n")] = '\0';

    printf("%s %s %s %s %s %s\n", opis1, forma, opis2, imie, opis3, nazwisko);
}

