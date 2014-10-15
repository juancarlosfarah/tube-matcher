all: tubematch.o test_deduplicator.o

tubematch.o: main.cpp match.cpp deduplicator.cpp test_deduplicator.cpp
	g++ -Wall -g -std=c++11 main.cpp match.cpp deduplicator.cpp -o tubematch.o

test_deduplicator.o: test_deduplicator.cpp deduplicator.cpp
	g++ -Wall -g -std=c++11 test_deduplicator.cpp deduplicator.cpp -o test_deduplicator.o
