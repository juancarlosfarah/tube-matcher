install: tubematch

tubematch: main.cpp match.cpp deduplicator.cpp
	g++ -Wall -g -std=c++11 main.cpp match.cpp deduplicator.cpp -o tubematch

test_deduplicator: test_deduplicator.cpp deduplicator.cpp
	g++ -Wall -g -std=c++11 test_deduplicator.cpp deduplicator.cpp -o test_deduplicator

test: test_deduplicator

clean:
	rm -f *.o test_deduplicator tubematch
	rm -rf *.o.dSYM
