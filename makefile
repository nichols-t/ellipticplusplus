# Default target
all: hello

hello: hello.o
		g++ -o hello hello.o -lgmp -lgmpxx

hello.o: src/hello.cpp
		g++ -c src/hello.cpp -pedantic-errors -Wall -Weffc++ -Werror -Wextra -Wsign-conversion
clean:
		rm hello.o hello