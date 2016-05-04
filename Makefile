all: a.out

a.out: myutils.o mysorting.o main.o
	g++ main.o myutils.o mysorting.o -o a.out

main.o: main.cpp
	g++ -c main.cpp

mysorting.o: src/mysorting.cpp
	g++ -c src/mysorting.cpp

myutils.o: src/myutils.cpp
	g++ -c src/myutils.cpp

clean:
	rm *.o
