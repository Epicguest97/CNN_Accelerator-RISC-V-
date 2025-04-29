#define ACC_BASE 0x80000000
#define ACC_INPUT (ACC_BASE + 0x00)
#define ACC_START (ACC_BASE + 0x100)
#define ACC_DONE  (ACC_BASE + 0x104)
#define ACC_OUTPUT (ACC_BASE + 0x200)

volatile int* acc_input = (int*) ACC_INPUT;
volatile int* acc_start = (int*) ACC_START;
volatile int* acc_done  = (int*) ACC_DONE;
volatile int* acc_output = (int*) ACC_OUTPUT;

int main() {
    // Load input data (8x8 grayscale image)
    int image[64] = {
        1, 2, 3, 4, 5, 6, 7, 8,
        1, 2, 3, 4, 5, 6, 7, 8,
        1, 2, 3, 4, 5, 6, 7, 8,
        1, 2, 3, 4, 5, 6, 7, 8,
        1, 2, 3, 4, 5, 6, 7, 8,
        1, 2, 3, 4, 5, 6, 7, 8,
        1, 2, 3, 4, 5, 6, 7, 8,
        1, 2, 3, 4, 5, 6, 7, 8,
    };

    for (int i = 0; i < 64; i++) {
        acc_input[i] = image[i];
    }

    // Trigger accelerator
    *acc_start = 1;

    // Wait for done
    while (*acc_done != 1);

    // Read output (example: 3x3 output)
    int output[9];
    for (int i = 0; i < 9; i++) {
        output[i] = acc_output[i];
    }

    return 0;
}
