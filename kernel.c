// kernel.c

void kernel_main() {
    char *video_memory = (char*) 0xB8000;

    const char *msg = "Hello World";

    for (int i = 0; msg[i] != '\0'; i++) {
        video_memory[i * 2] = msg[i];        // character
        video_memory[i * 2 + 1] = 0x07;      // color (white on black)
    }
}