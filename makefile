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

lab2_1:
	gcc -g -o lab2_1 2/1/main.c

lab2_2:
	gcc -g -w -o lab2_2 2/2/main.c

lab2_3_lib:
	gcc -c -o 2/3/io.o 2/3/io.c
	ar crs 2/3/liblab2.a 2/3/io.o

lab2_3: lab2_3_lib
	gcc -g -o lab2_3 2/3/main.c -L2/3 -llab2

lab3_lmatrix:
	gcc -c -w -o 3/matrix.o 3/matrix.c
	gcc -shared -o libmatrix.so 3/matrix.o

lab3_larray:
	gcc -c -w -o 3/array.o 3/array.c
	gcc -shared -o libarray.so 3/array.o

lab3_linux: lab3_lmatrix lab3_larray
	gcc -c -w -fPIC -o 3/main.o 3/main.c
	gcc -o lab3 3/main.o -ldl

lab3_windows:
	gcc -c -w -fPIC -o 3/main_win.o 3/main_win.c
	gcc -o lab3 3/main_win.o

all: lab1_1 lab1_2 lab1_3 lab2_1 lab2_2 lab2_3 lab3_linux

clean1:
	rm -f lab1_1
	rm -f lab1_2
	rm -f lab1_3

	rm -f 1/1/first.i
	rm -f 1/1/first.o
	rm -f 1/1/first.s
	rm -f 1/2/*.o
	rm -f 1/2/*.a

clean2:
	rm -f lab2_1
	rm -f lab2_2
	rm -f lab2_3

	rm -f 2/3/io.o
	rm -f 2/3/liblab2.a

clean3:
	rm -f lab3
	rm -f libarray.so
	rm -f libmatrix.so

	rm -f 3/*.o

clean: clean1 clean2 clean3
