#include <stdio.h>

// Function prototypes
void sender(int frames);
void receiver(int frame);

int main() {
    int n;

    printf("Enter number of frames to send: ");
    scanf("%d", &n);

    sender(n);

    return 0;
}

void sender(int frames) {
    int frameNo = 1, ack;

    while (frameNo <= frames) {
        printf("Sender: Sending frame %d\n", frameNo);

        // Simulate receiver side
        receiver(frameNo);

        // Wait for acknowledgment
        printf("Sender: Waiting for ACK of frame %d...\n", frameNo);
        printf("Enter ACK for frame %d (1 for ACK received, 0 for lost): ", frameNo);
        scanf("%d", &ack);

        if (ack == 1) {
            printf("ACK received for frame %d. Proceeding to next frame.\n", frameNo);
            frameNo++;
        } else {
            printf("ACK lost for frame %d. Resending frame.\n", frameNo);
            // frameNo not incremented, so the same frame will be resent
        }
    }
    printf("All frames sent successfully.\n");
}

void receiver(int frame) {
    printf("Receiver: Frame %d received.\n", frame);
}
