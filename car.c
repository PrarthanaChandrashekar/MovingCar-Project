#include <stdio.h>

int main() {
    FILE *fp;
    int x;

    // Read previous position
    fp = fopen("pos.txt", "r");
    if (fp == NULL) {
        x = 0;
    } else {
        fscanf(fp, "%d", &x);
        fclose(fp);
    }

    // Update position
    x += 5;
    if (x > 700)
        x = 0;

    // Save new position
    fp = fopen("pos.txt", "w");
    fprintf(fp, "%d", x);
    fclose(fp);

    printf("%d", x);
    return 0;
}

