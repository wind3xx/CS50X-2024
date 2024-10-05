#include <stdio.h>
#include <math.h>

void readability(char * tekst) {

    int litery = 0;
    int wyrazy = 1;
    int zdania = 0;

    int i = 0;

    while(tekst[i] != '\0') {
        if((tekst[i] >= 65 && tekst[i] <= 90)||(tekst[i] >= 97 && tekst[i] <= 122)) {
            litery++;
        }
        if(tekst[i] == ' ') {
            wyrazy++;
        }
        if(tekst[i] == '.' || tekst[i] == '?' || tekst[i] == '!') {
            zdania++;
        }
        i++;
    }

    float L = ((float)litery / wyrazy) * 100;
    float S = ((float)zdania / wyrazy) * 100;

    float wynik = (0.0588 * L) - (0.296 * S) - 15.8;

    int klasa = round(wynik);

    if(wynik < 1) {
        printf("Ponizej klasy 1.");
    }
    else if(wynik > 16) {
        printf("Klasa 16+");
    }
    else {
        printf("Klasa %d.", klasa);
    }
}

int main() {

    char tekst[1000];
    printf("Tekst: ");
    fgets(tekst, sizeof(tekst), stdin);

    readability(tekst);

    return 0;
}