all: lab5

lab5: lab5functions.o lab5.o
	gcc lab5functions.o lab5.o -o lab5

lab5.o: lab5.c lab5functions.h
	gcc -c lab5.c

lab5functions.o: lab5functions.c lab5functions.h
	gcc -c lab5functions.c

clean: 
	rm -rf *.o
