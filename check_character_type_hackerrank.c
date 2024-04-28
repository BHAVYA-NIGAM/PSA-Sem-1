#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) {
        if (a == 'A' || a == 'a' || a == 'E' || a == 'e' || a == 'I' || a == 'i' || a == 'O' || a == 'o' || a == 'U' || a == 'u') {
            printf("VOWEL");
        } else {
            printf("CONSONANT");
        }
    }
    else if (a >= '0' && a <= '9') {
        printf("DIGIT");
    }
    else {
        printf("SPECIAL SYMBOL");
    }

    return 0;
}