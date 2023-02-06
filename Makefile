default: ./src/*
	g++ -g ./src/*.cpp -I ./Pieces -o ./bin/engine

clean:
	rm -rf ./bin/*