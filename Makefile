# This is an example make file

CXX = g++  # the compiler
CXXFLAGS = -std=c++20 -Wall  # flags for the compiler (use c++17 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

all: main test

clean:
	rm main test

main: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o main

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test