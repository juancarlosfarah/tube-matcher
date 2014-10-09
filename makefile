tubematch.o: main.cpp match.cpp deduplicator.cpp
	g++ -g main.cpp match.cpp deduplicator.cpp -o tubematch.o

test_deduplicator.o: test_deduplicator.cpp deduplicator.cpp
	g++ -g test_deduplicator.cpp deduplicator.cpp -o test_deduplicator.o
