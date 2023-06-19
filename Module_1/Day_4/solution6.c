/*6. Toggle */
#include <stdio.h>
#include <ctype.h>

void toggleString(char* str) {
    while (*str) {
        if (islower(*str))
            *str = toupper(*str);
        else if (isupper(*str))
            *str = tolower(*str);
        str++;
    }
}

int main() {
    char str[1000];
    printf("Enter your string:");
    scanf("%s", str);
    printf("Original string: %s\n", str);
    
    toggleString(str);
    printf("Toggled string: %s\n", str);
    
    return 0;
}
