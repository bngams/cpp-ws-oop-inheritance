# Makefile pour l'exercice 2

CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = maison
OBJS = main.o Piece.o Bathroom.o Bedroom.o House.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp House.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Piece.o: Piece.cpp Piece.h
	$(CXX) $(CXXFLAGS) -c Piece.cpp

Bathroom.o: Bathroom.cpp Bathroom.h Piece.h
	$(CXX) $(CXXFLAGS) -c Bathroom.cpp

Bedroom.o: Bedroom.cpp Bedroom.h Piece.h
	$(CXX) $(CXXFLAGS) -c Bedroom.cpp

House.o: House.cpp House.h Piece.h Bathroom.h Bedroom.h
	$(CXX) $(CXXFLAGS) -c House.cpp

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
