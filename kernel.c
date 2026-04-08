void kernel_main() {
    char *video = (char*)0xB8000;
    char *msg = "Hello World";

    for(int i=0; msg[i]; i++){
        video[i*2] = msg[i];
        video[i*2+1] = 0x07;
    }
}
