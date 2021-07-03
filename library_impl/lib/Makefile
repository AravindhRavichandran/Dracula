CPP_COMPILER=g++
CPP_FLAGS=-I.

make:
	$(CPP_COMPILER) -c utils.cpp -o utils.o $(CPP_FLAGS)
	ar r utils.a utils.o

clean:
	rm -f utils.o
	rm -f utils.a