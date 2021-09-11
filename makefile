lab1_1:
	gcc -E -o 1/1/first.i 1/1/first.c
	gcc -S -o 1/1/first.s 1/1/first.i
	gcc -c -o 1/1/first.o 1/1/first.s
	gcc 1/1/first.o -o lab1_1

lab1_2:
	gcc -c -o 1/2/invert.o 1/2/invert.c  
	gcc -c -w -o 1/2/io.o 1/2/io.c
	gcc -c -o 1/2/second.o 1/2/second.c
	gcc -o lab1_2 1/2/invert.o 1/2/io.o 1/2/second.o

lab1_2_lib: lab1_lib
	gcc -c -o 1/2/second.o 1/2/second.c
	gcc -o lab1_2 1/2/second.o -L1/2 -llab1

lab1_3_lib: lab1_lib
	gcc -c -o 1/2/third.o 1/2/third.c
	gcc -o lab1_3 1/2/third.o -L1/2 -llab1

lab1_3:
	gcc -c -o 1/2/insert.o 1/2/insert.c
	gcc -c -w -o 1/2/io.o 1/2/io.c
	gcc -c -o 1/2/third.o 1/2/third.c
	gcc -o lab1_3 1/2/insert.o 1/2/io.o 1/2/third.o

lab1_lib:
	gcc -c -o 1/2/invert.o 1/2/invert.c
	gcc -c -o 1/2/insert.o 1/2/insert.c
	gcc -c -w -o 1/2/io.o 1/2/io.c
	ar crs 1/2/liblab1.a 1/2/invert.o 1/2/insert.o 1/2/io.o

clean1:
	rm -f lab1_1
	rm -f lab1_2
	rm -f lab1_3

	rm -f 1/1/first.i
	rm -f 1/1/first.o
	rm -f 1/1/first.s
	rm -f 1/2/*.o
	rm -f 1/2/*.a

clean: clean1
