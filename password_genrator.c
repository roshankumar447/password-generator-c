#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length;

    char characters[] =
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz"
            "0123456789"
            "!@#$%^&*()_+";

    int charCount = sizeof(characters) - 1;

    printf("Enter password length: ");
    scanf("%d", &length);

    srand(time(NULL));   // seed random generator

    printf("Generated Password: ");

    for (int i = 0; i < length; i++) {
        int randomIndex = rand() % charCount;
        printf("%c", characters[randomIndex]);
    }

    printf("\n");
    return 0;
}
