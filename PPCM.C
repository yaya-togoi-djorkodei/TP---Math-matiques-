#include <stdio.h>

// Fonction pour calculer le PGCD (nécessaire pour le PPCM)
int pgcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    
    printf("Entrez deux nombres entiers a et b : ");
    scanf("%d %d", &a, &b);
    
    // Calcul du PPCM : (a * b) / PGCD(a, b)
    int p = pgcd(a, b);
    int ppcm = (a * b) / p;
    
    printf("PPCM(%d, %d) = %d\n", a, b, ppcm);
    
    return 0;
}
