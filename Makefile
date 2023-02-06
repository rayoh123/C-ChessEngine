default: ./src/*
	g++ -Wall -Werror -Wextra -Wsign-conversion -pedantic -O2 -g --std=c++17 -o ./bin/engine ./src/*

clean:
	rm -rf ./bin/*