ToDo: main.o ToDo.o
	g++ -o ToDo main.o ToDo.o
main.o: main.cpp ToDo.h
	g++ -c main.cpp
ToDo.o: ToDo.cpp ToDo.h
	g++ -c ToDo.cpp
clean:
	rm *.o ToDo
