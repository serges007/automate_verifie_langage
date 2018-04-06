
programme : main.o fonctions.o
	gcc main.o fonctions.o -o programme

main.o : main.c fonctions.c
	gcc -c main.c -o main.o

fonctions.o : fonctions.c
	gcc -c fonctions.c -o fonctions.o
