solver:main.o src/hash.o src/cube.o src/search.o
	gcc main.o src/hash.o src/cube.o src/search.o -o solver
main.o:main.c
	gcc -c main.c -o main.o
src/cube.o:src/cube.c include/cube.h cube_solve.h sys.h
	gcc -c src/cube.c -o src/cube.o
src/hash.o:src/hash.c src/cube.o include/search.h include/hash.h include/cube.h cube_solve.h sys.h
	gcc -c src/hash.c -o src/hash.o
src/search.o:src/cube.o src/hash.o src/search.c include/search.h include/hash.h include/cube.h cube_solve.h sys.h
	gcc -c src/search.c -o src/search.o

clean:
	rm src/*.o
	rm *.o
