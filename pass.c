#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isUpperCasePresent(char* password) {
    int i;
    for (i = 0; i < strlen(password); i++) {
        if (isupper(password[i]))
            return 1; // Uppercase character found
    }
    return 0; // No uppercase character
}

int isLowerCasePresent(char* password) {
    int i;
    for (i = 0; i < strlen(password); i++) {
        if (islower(password[i]))
            return 1; // Lowercase character found
    }
    return 0; // No lowercase character
}

int isSpecialCharacterPresent(char* password) {
    int i;
    for (i = 0; i < strlen(password); i++) {
        if (!isalnum(password[i]))
            return 1; // Special character found
    }
    return 0; // No special character
}

int isPasswordComplex(char* password) {
    int length = strlen(password);

    if (length < 10) {
        return 0; // Password length is less than 10 characters
    }

    if (!isUpperCasePresent(password)) {
        return 0; // No uppercase character
    }

    if (!isLowerCasePresent(password)) {
        return 0; // No lowercase character
    }

    if (!isSpecialCharacterPresent(password)) {
        return 0; // No special character
    }

    return 1; // Password meets all complexity requirements
}

int main() {
    char password[100];

    printf("Enter a password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';

    if (isPasswordComplex(password)) {
        printf("Password is complex.\n");
    } else {
        printf("Password is not complex.\n");
    }

    return 0;
}
