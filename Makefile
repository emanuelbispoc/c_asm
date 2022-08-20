all:
	nasm -f elf64 -o amain.o amain.asm
	cc -c -o cmain.o cmain.c
	gcc -o teste.exe cmain.o amain.o