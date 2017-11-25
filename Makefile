all:
	rm -rf a.out
	gcc -o a.out main.c

clean:
	rm -rf a.out *.o
