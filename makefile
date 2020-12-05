output : main.o
	g++ -std=c++2a main.o -o Algo
main.o : main.cpp
	g++ -c -std=c++2a main.cpp
clean: 
	rm *.o Algo
run:
	./Algo