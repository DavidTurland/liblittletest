CFLAGS += -I ../src

test: t test.cpp
	g++ -I ../src test.cpp -o test

t: 
	gcc -E -I ../src test.cpp -o test.i

clean:
	- rm *.o $(tests)

