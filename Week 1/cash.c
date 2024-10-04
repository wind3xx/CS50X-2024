#include <stdio.h>

int cal_q(int rozl) {
    int ilosc_monet = 0;
    while(rozl != 0) {
        if(rozl % 25 == 0) {
            ilosc_monet++;
            rozl -= 25;
        }
        else if(rozl % 10 == 0) {
            ilosc_monet++;
            rozl -= 10;
        }
        else if(rozl % 5 == 0) {
            ilosc_monet++;
            rozl -= 5;
        }
        else {
            ilosc_monet++;
            rozl -= 1;
        }
    }
    return ilosc_monet;
}

int main() {

    const int reszta;
    do {
        printf("Podaj reszte: ");
        scanf("%d", &reszta);
    }
    while(reszta < 0);

    int rozl = reszta;
    int wynik = cal_q(rozl);
    printf("%d", wynik);

    return 0;
}
