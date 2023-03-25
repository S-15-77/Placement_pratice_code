#include <stdio.h>
#include <string.h>

void replaceNonOverlapping(char *str, char *pattern, char replaceChar) {
    int strLen = strlen(str);
    int patLen = strlen(pattern);
    int replaceLen = 1; // length of replacement character
    int i = 0;
    
    while (i < strLen) {
        if (strncmp(&str[i], pattern, patLen) == 0) {
            // match found, replace non-overlapping occurrences
            for (int j = i + patLen; j < strLen; j += patLen) {
                if (strncmp(&str[j], pattern, patLen) == 0) {
                    i = j;
                    break; // overlapping occurrence found, break loop
                }
                str[j] = replaceChar;
                replaceLen++;
            }
        }
        i += patLen;
    }
    
    // pad string with null characters to remove trailing characters
    for (int j = strLen; j > strLen - replaceLen; j--) {
        str[j] = '\0';
    }
}

int main() {
    char str[] = "ABCABCXABC";
    char pattern[] = "ABC";
    char replaceChar = '@';
    
    printf("Input string: %s\n", str);
    printf("Pattern to replace: %s\n", pattern);
    printf("Character to replace with: %c\n", replaceChar);
    
    replaceNonOverlapping(str, pattern, replaceChar);
    
    printf("Output string: %s\n", str);
    
    return 0;
}
