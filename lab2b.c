#include <stdio.h>
#include <string.h>

void bitStuffing(char *data, char *stuffed) {
    int count = 0, j = 0;
    for (int i = 0; data[i] != '\0'; i++) {
        stuffed[j++] = data[i];
        if (data[i] == '1')
            count++;
        else
            count = 0;

        if (count == 5) {  // After five consecutive 1s, insert 0
            stuffed[j++] = '0';
            count = 0;
        }
    }
    stuffed[j] = '\0';
}

void bitDestuffing(char *stuffed, char *destuffed) {
    int count = 0, j = 0;
    for (int i = 0; stuffed[i] != '\0'; i++) {
        destuffed[j++] = stuffed[i];
        if (stuffed[i] == '1')
            count++;
        else
            count = 0;

        if (count == 5) {
            i++;  // skip stuffed 0
            count = 0;
        }
    }
    destuffed[j] = '\0';
}

int main() {
    char data[200], stuffed[300], destuffed[300];

    printf("Enter bit string (e.g. 0111111011): ");
    scanf("%s", data);

    bitStuffing(data, stuffed);
    printf("After Bit Stuffing: %s\n", stuffed);

    bitDestuffing(stuffed, destuffed);
    printf("After Bit Destuffing: %s\n", destuffed);

    return 0;
}
