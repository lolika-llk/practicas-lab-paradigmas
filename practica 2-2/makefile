EXEC=complejo.out
OBJ=main.o complejo.o
$(EXEC):$(OBJ)
	g++ $(OBJ) -o $(EXEC)

complejo.o:complejo.cpp
	g++ -c complejo.cpp 
main.o:main.cpp 
	g++ -c main.cpp

clean:
	rm $(OBJ)
