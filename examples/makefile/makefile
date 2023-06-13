helloworld: main.o
	gcc -o helloworld main.o

main.o: main.s
	gcc -g -c -o main.o main.s

main.s: main.i
	 gcc -g -S -o main.s main.i

main.i:
	 gcc -E -o main.i main.c

.PHONY: clean
clean:
	rm main.i main.s main.o helloworld
