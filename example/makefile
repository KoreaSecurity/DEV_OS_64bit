all: output

a.o: a.c
	gcc -c a.c
b.o: b.c
	gcc -c b.c
output: a.o b.o
	gcc -o output a.o b.o
