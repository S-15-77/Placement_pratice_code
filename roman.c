#include<stdio.h>
#include<string.h>

int romanToInt(char* s) {
    int values[7] = {1, 5, 10, 50, 100, 500, 1000};
    char symbols[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int res = 0;
    int prev_val = 0;
    int curr_val = 0;
    
    for (int i = strlen(s) - 1; i >= 0; i--) {
        for (int j = 0; j < 7; j++) {
            if (symbols[j] == s[i]) {
                curr_val = values[j];
                break;
            }
        }
        if (curr_val < prev_val) {
            res -= curr_val;
        } else {
            res += curr_val;
        }
        prev_val = curr_val;
    }
    
    return res;
}

void main(){
    char str[10];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("%d",romanToInt(str));
}