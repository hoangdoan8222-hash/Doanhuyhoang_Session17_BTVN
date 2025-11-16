#include <stdio.h>
#include <string.h>

int main() {
    char s[100], c;
    int i, j = 0;

    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("Nhap ky tu can xoa: ");
    scanf("%c", &c);

    for (i = 0; i < strlen(s); i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';

    printf("Chuoi sau khi xoa: %s\n", s);

    return 0;
}

