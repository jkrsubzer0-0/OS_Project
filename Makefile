all:
	nasm -f bin boot.asm -o myos.bin

run:
	qemu-system-i386 myos.bin

clean:
	rm -f myos.bin