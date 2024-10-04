#include <stdio.h>

void piramid(int wysokosc, int a, int temp1) {
    while(a <= wysokosc) {
        int temp2 = a;
        int ile_spacji = temp1 - temp2;
        for(int j = 1; j <= ile_spacji; j++) {
            printf(" ");
        }
        for(int i = 1; i <= a; i++) {
            printf("#");
        }
        printf("\n");
        a++;
    }
}

int main() {
    int wysokosc;
    do {
        printf("Podaj wysokosc:\n");
        scanf("%d", &wysokosc);
    }
    while(wysokosc <= 0);

    int a = 1;
    int temp1 = wysokosc;

    piramid(wysokosc, a, temp1);

    return 0;
}
