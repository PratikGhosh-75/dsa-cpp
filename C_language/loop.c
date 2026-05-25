#include <stdio.h>
int main() {
    int i = 0;
    while (i < 5) {
        printf("i: %d\n", i);
        i++;
    }

    for (int j = 0; j < 5; j++) {
        printf("j: %d\n", j);
    }

    return 0;
}