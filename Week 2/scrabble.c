#include <stdio.h>

void scrabble(char * nap1, char * nap2) {
    int wynik_1 = 0;
    int wynik_2 = 0;
    int i = 0;
    int j = 0;
    while(nap1[i] != '\0') {
        if(nap1[i] <= 122 && nap1[i] >= 97){
            nap1[i] -= 32;
        }
        if(nap1[i] == 'A' || nap1[i] == 'E' || nap1[i] == 'I' || nap1[i] == 'N' || nap1[i] == 'O' || nap1[i] =='R' || nap1[i] =='S' || nap1[i] =='T' || nap1[i] =='U' || nap1[i] == 'E') {
            wynik_1++;
        }
        if(nap1[i] == 'D' || nap1[i] == 'G') {
            wynik_1 += 2;
        }
        if(nap1[i] == 'B' || nap1[i] == 'C' || nap1[i] == 'M' || nap1[i] == 'P') {
            wynik_1 += 3;
        }
        if(nap1[i] == 'F' || nap1[i] == 'H' || nap1[i] == 'V' || nap1[i] == 'W' || nap1[i] == 'Y') {
            wynik_1 += 4;
        }
        if(nap1[i] == 'J' || nap1[i] == 'X') {
            wynik_1 += 8;
        }
        if(nap1[i] == 'Q' || nap1[i] == 'Z') {
            wynik_1 += 10;
        }
        i++;
    }

    while(nap2[j] != '\0') {
        if(nap2[j] <= 122 && nap2[j] >= 97){
            nap2[j] -= 32;
        }
        if(nap2[j] == 'A' || nap2[j] == 'E' || nap2[j] == 'I' || nap2[j] == 'N' || nap2[j] == 'O' || nap2[j] =='R' || nap2[j] =='S' || nap2[j] =='T' || nap2[j] =='U' || nap2[j] == 'E') {
            wynik_2++;
        }
        if(nap2[j] == 'D' || nap2[j] == 'G') {
            wynik_2 += 2;
        }
        if(nap2[j] == 'B' || nap2[j] == 'C' || nap2[j] == 'M' || nap2[j] == 'P') {
            wynik_2 += 3;
        }
        if(nap2[j] == 'F' || nap2[j] == 'H' || nap2[j] == 'V' || nap2[j] == 'W' || nap2[j] == 'Y') {
            wynik_2 += 4;
        }
        if(nap2[j] == 'J' || nap2[j] == 'X') {
            wynik_2 += 8;
        }
        if(nap2[j] == 'Q' || nap2[j] == 'Z') {
            wynik_2 += 10;
        }
        j++;
    }
    if(wynik_1 > wynik_2) {
        printf("Gracz 1 wygrywa!");
    }
    else if(wynik_1 == wynik_2) {
        printf("Remis!");
    }
    else {
        printf("Gracz 2 wygrywa!");
    }
}

int main() {

    char nap1[50];
    char nap2[50];

    printf("Gracz 1: ");
    scanf("%s", nap1);
    printf("Gracz 2: ");
    scanf("%s", nap2);

    scrabble(nap1, nap2);

    return 0;
}