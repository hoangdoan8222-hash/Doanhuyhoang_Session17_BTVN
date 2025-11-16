#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, len, isPalindrome = 1;

    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; 

    len = strlen(s);

    for (i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("La palindrome\n");
    else
        printf("Khong phai palindrome\n");

    return 0;
}

