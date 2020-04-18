prog:Main.o Main.o ennemi.o 
	gcc Main.o ennemi.o   -lSDL -lSDL_image -lSDL_ttf -o prog
main.o:Main.c
	gcc -lSDL -lSDL_image -lSDL_ttf -c Main.c -w

ennemi.o:ennemi.o
	gcc -lSDL -lSDL_image -lSDL_ttf -c ennemi -w


