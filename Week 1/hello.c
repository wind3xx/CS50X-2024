#include <stdio.h>

int main() {

    char imie[50];

    printf("Jak masz na imie? ");
    scanf("%s", &imie);

    printf("Witaj, %s", imie);

    return 0;
}