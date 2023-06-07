#include <stdio.h>
int main() {
    int numEmployees;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);
    printf("Enter the names of the employees:\n");
    for (int i = 0; i < numEmployees; i++) {
        char name[100];
        scanf("%s", name);
        int isValid = 1;
        for (int j = 0; name[j] != '\0'; j++) {
            if (!((name[j] >= 'A' && name[j] <= 'Z') || (name[j] >= 'a' && name[j] <= 'z'))) {
                isValid = 0;
                break;
            }
        }
        if (!isValid) {
            printf("Invalid name: %s\n", name);
        }
    }
    return 0;
}