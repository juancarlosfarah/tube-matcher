tubematch.o: main.cpp match.cpp deduplicator.cpp test_deduplicator.cpp
	g++ -Wall -g main.cpp match.cpp deduplicator.cpp -o tubematch.o

#TODO: Fix this rule.
#test_deduplicator.o: test_deduplicator.cpp deduplicator.cpp
#	g++ -Wall -g test_deduplicator.cpp deduplicator.cpp -o test_deduplicator.o
