all: exec.out

exec.out: main.o mysorting.o myutils.o
	g++ main.o mysorting.o myutils.o -o exec.out

main.o: main.cpp
	g++ -c main.cpp

mysorting.o: src/mysorting.cpp
	g++ -c src/mysorting.cpp

myutils.o: src/myutils.cpp
	g++ -c src/myutils.cpp

clean:
	rm *.o
