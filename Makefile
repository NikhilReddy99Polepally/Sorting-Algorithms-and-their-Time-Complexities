output: main.o Insertion.o quicksort.o selectionsort.o
	g++ main.o Insertion.o quicksort.o selectionsort.o -o sort
    
main.o: main.cpp
	g++ -c main.cpp
    
Insertion.o: Insertion.cpp
	g++ -c Insertion.cpp
    
quicksort.o: quicksort.cpp
	g++ -c quicksort.cpp
    
selectionsort.o: selectionsort.cpp
	g++ -c selectionsort.cpp
    
clean:
	rm *.o sort                
