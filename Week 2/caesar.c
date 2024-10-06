#include <stdio.h>
#include <stdlib.h>

void metamorfoza(int ile_znakow) {

    char plaintext[200];
    char ciphertext[200];

    printf("plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);
    
    int i = 0;
    while(plaintext[i] != '\0') {
        if(plaintext[i] >= 65 && plaintext[i] <= 90) {
            ciphertext[i] = (plaintext[i] - 65 + ile_znakow) % 26 + 65;
        }
        else if(plaintext[i] >= 97 && plaintext[i] <= 122) {
            ciphertext[i] = (plaintext[i] - 97 + ile_znakow) % 26 + 97;
        }
        else{
            ciphertext[i] = plaintext[i];
        }
        i++;
    }
    ciphertext[i] = '\0';
    printf("ciphertext: %s", ciphertext);
}

int main(int argc, char * argv[]) {

    if(argc != 2) {
        printf("Usage: ./caesar key");
        return 1;
    }

    int i = 0;
    while(argv[1][i] != '\0') { // Na pierwszej pozycji określamy który to element, na drugiej możemy badać poszczególne elementy tego, co użytkownik wpisał do terminala.
        if(argv[1][i] > 57 || argv[1][i] < 47) {
            printf("Usage: ./caesar key");
            return 1;
        }
        i++;
    }

    int ile_znakow = atoi(argv[1]); //funkcja atoi() wystarcza nam tutaj, ale do bardziej skomplikowanych rzeczy juz moze nie wystarczyc

    metamorfoza(ile_znakow);

    return 0;
}