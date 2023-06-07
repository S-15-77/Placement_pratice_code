#include <stdio.h>
#include <string.h>

char* getStateFromRegistrationNumber(char* registrationNumber) {
    // Extract the state code from the registration number
    char stateCode[3];
    strncpy(stateCode, registrationNumber, 2);
    stateCode[2] = '\0';

    // Match the state code using a switch statement
    switch (stateCode[0]) {
        case 'A':
            switch (stateCode[1]) {
                case 'P': return "Andhra Pradesh";
                case 'R': return "Arunachal Pradesh";
            }
            break;
        case 'T':
            switch (stateCode[1]) {
                case 'N': return "Tamil Nadu";
            }
            break;
        // Add cases for other state codes as needed
    }

    return "Unknown State";
}

int main() {
    char registrationNumber[15];
    printf("Enter the vehicle registration number: ");
    scanf("%s", registrationNumber);

    char* state = getStateFromRegistrationNumber(registrationNumber);
    printf("State: %s\n", state);

    return 0;
}
