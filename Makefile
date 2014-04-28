all: fizzbuzz.o
	clang -std=c11 -o main main.c fizzbuzz.o
test: fizzbuzz.o
	clang++ -std=c++11 -lCppUTest -o test test.cc fizzbuzz.o
fizzbuzz.o:
	clang -std=c11 -c fizzbuzz.c
clean:
	rm -rf fizzbuzz.o main test
