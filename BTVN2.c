#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100];
    int choice;
    int i; // ?? khai báo i ? dây d? tránh l?i

    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("\n===== MENU =====\n");
    printf("1. Chuyen thanh chu HOA\n");
    printf("2. Chuyen thanh chu thuong\n");
    printf("Nhap lua chon: ");
    scanf("%d", &choice);

    if (choice == 1 || choice == 2) {
        for (i = 0; i < strlen(s); i++) {
            if (choice == 1)
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
        }
        printf("Ket qua: %s\n", s);
    } else {
        printf("Lua chon khong hop le!\n");
    }

    return 0;
}

