#include <stdio.h>
#include <string.h>

void charStuffing(char *data, char *stuffed) {
    char FLAG = 'F';   // Flag character for frame boundary
    char ESC = 'E';    // Escape character

    int i, j = 0;
    stuffed[j++] = FLAG;  // Start with flag

    for (i = 0; i < strlen(data); i++) {
        if (data[i] == FLAG || data[i] == ESC) {
            stuffed[j++] = ESC;  // Insert escape before flag or escape char
        }
        stuffed[j++] = data[i];
    }

    stuffed[j++] = FLAG;  // End with flag
    stuffed[j] = '\0';
}

void charDestuffing(char *stuffed, char *destuffed) {
    int i, j = 0;
    char ESC = 'E';

    for (i = 1; stuffed[i] != 'F'; i++) { // skip initial flag and stop at ending flag
        if (stuffed[i] == ESC)
            i++;  // skip escape character
        destuffed[j++] = stuffed[i];
    }
    destuffed[j] = '\0';
}

int main() {
    char data[100], stuffed[200], destuffed[100];

    printf("Enter data to stuff: ");
    fgets(data, 100, stdin);
    data[strcspn(data, "\n")] = 0;

    charStuffing(data, stuffed);
    printf("After Character Stuffing: %s\n", stuffed);

    charDestuffing(stuffed, destuffed);
    printf("After Character Destuffing: %s\n", destuffed);

    return 0;
}
