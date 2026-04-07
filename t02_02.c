// 12S25030 - Nina Theresia Tarigan

#include <stdio.h>

int main() {
    int level;
    scanf("%d", &level);

    switch (level) {
        case 5: printf("milk\n");
        case 4: printf("fruits\n");
        case 3: printf("vegetables\n");
        case 2: printf("side dishes\n");
        case 1: printf("staple food\n");
    }

    if (level == 1) {
        printf("you need side dishes\n");
    } else if (level == 2) {
        printf("you need vegetables\n");
    } else if (level == 3) {
        printf("good\n");
    } else if (level == 4) {
        printf("very good\n");
    } else if (level == 5) {
        printf("perfect\n");
    }

    return 0;
}