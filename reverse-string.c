#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        // Swap characters at left and right pointers
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        // Move pointers towards the center
        left++;
        right--;
    }
}

int main() {
    char str[] = "hello";
    int len = strlen(str);

    reverseString(str, len);

    printf("Reversed string: %s\n", str);

    return 0;
}
