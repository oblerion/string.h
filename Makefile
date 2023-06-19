all: main

main: string.o main.o
	gcc src/string.o src/main.o -o main
string.o: src/string.c
	gcc -c src/string.c -o src/string.o
main.o: src/main.c
	gcc -c src/main.c -o src/main.o
clean:
	rm src/*.o
