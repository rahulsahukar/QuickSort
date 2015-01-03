all:
	g++ -g QuickSort.cc QuickSortTest.cc -o QuicknSort
	g++ -c QuickSort.cc 
	ar rvs QuickSort.a QuickSort.o

clean: 
	rm -rf QuickSort QuickSort.o QuickSort.a
