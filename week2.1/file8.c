#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int length = strlen(str);
    int i, j;
    char temp;
    
    for (i = 0, j = length - 1; i < j; i= i + 1 j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[] = "martin";

    printf("Original string: %s\n", str);
    
    reverseString(str);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}