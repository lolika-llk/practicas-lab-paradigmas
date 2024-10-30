EXEC=complejo
OBJ=main.o complejo.o
$(EXEC):$(OBJ)
	g++ $(OBJ) -o $(EXEC)

complejo.o:complejo.cpp complejo.h
	g++ -c complejo.cpp 
main.o:main.cpp  complejo.h
	g++ -c main.cpp
clean:
	rm $(OBJ)
cleanall:
	rm $(OBJ) $(EXEC)
