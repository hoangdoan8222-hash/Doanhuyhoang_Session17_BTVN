#include <stdio.h>
#include <string.h>

int main() {
    char s[200], word[50], longest[50];
    int i = 0, j = 0, len, maxLen = 0;

    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; 

    longest[0] = '\0'; 
    while (s[i] != '\0') {
        j = 0;
        
        while (s[i] == ' ' && s[i] != '\0') i++;

        while (s[i] != ' ' && s[i] != '\0') {
            word[j++] = s[i++];
        }
        word[j] = '\0';

        len = strlen(word);
        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, word);
        }
    }

    printf("Tu dai nhat: %s\nDo dai: %d\n", longest, maxLen);

    return 0;
}

