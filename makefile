install: tubematch

tubematch: main.cpp match.cpp deduplicator.cpp
	g++ -g main.cpp match.cpp deduplicator.cpp -o tubematch

test_deduplicator: test_deduplicator.cpp deduplicator.cpp
	g++ -g test_deduplicator.cpp deduplicator.cpp -o test_deduplicator

test: test_deduplicator

clean:
	rm -f *.o test_deduplicator tubematch
	rm -rf *.o.dSYM
