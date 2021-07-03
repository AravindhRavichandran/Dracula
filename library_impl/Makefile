CPP_COMPILER=g++

make:
	+$(MAKE) -C lib
	$(CPP_COMPILER) main.cpp lib/utils.a -o main

clean:
	+$(MAKE) -C lib clean
	rm -f main