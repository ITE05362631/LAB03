lab03:lab03.o
	gcc  -o lab03  lab03.o

lab03.o:lab03.c
	gcc -c lab03.c

clean:
	rm *.o