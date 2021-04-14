CC=g++
CXXFLAGS=-Wall -g
OBJECTS=main.o model.o view.o controller.o
EXECUTABLE=sb
LIBS=-lsfml-graphics -lsfml-window -lsfml-system

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(CXXFLAGS) -o $(EXECUTABLE) $(OBJECTS) $(LIBS)

clear:
	$(RM) $(OBJECTS) $(EXECUTABLE)

depend:
	$(CC) -MM $(CXXFLAGS) $(OBJ:.o=.cc) > .depend

-include .depend
