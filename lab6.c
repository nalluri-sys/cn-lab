#include <stdio.h>

int main() {
    int window_size, sent = 0, ack, i;

    printf("Enter window size: ");
    scanf("%d", &window_size);

    while (1) {
        // Send frames in the window
        for (i = 0; i < window_size; i++) {
            printf("Frame %d has been transmitted.\n", sent);
            sent++;
            if (sent == window_size)
                break;
        }

        printf("\nPlease enter the last Acknowledgement received: ");
        scanf("%d", &ack);

        // Stop if all frames are acknowledged
        if (ack == window_size)
            break;
        else
            sent = ack;   // Go back to the last unacknowledged frame
    }

    return 0;
}
