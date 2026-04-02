; boot.s
BITS 32
GLOBAL _start

SECTION .text
_start:
    call kernel_main

hang:
    jmp hang
