# Makefile pour l'exercice 4 (version évolutive)

CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = gestion
OBJS = main.o Polygon.o Circle.o Rectangle.o Square.o Triangle.o ShapeManager.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp ShapeManager.h Shape.h Circle.h Rectangle.h Square.h Triangle.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Polygon.o: Polygon.cpp Polygon.h Shape.h
	$(CXX) $(CXXFLAGS) -c Polygon.cpp

Circle.o: Circle.cpp Circle.h Shape.h
	$(CXX) $(CXXFLAGS) -c Circle.cpp

Rectangle.o: Rectangle.cpp Rectangle.h Polygon.h
	$(CXX) $(CXXFLAGS) -c Rectangle.cpp

Square.o: Square.cpp Square.h Polygon.h
	$(CXX) $(CXXFLAGS) -c Square.cpp

Triangle.o: Triangle.cpp Triangle.h Polygon.h
	$(CXX) $(CXXFLAGS) -c Triangle.cpp

ShapeManager.o: ShapeManager.cpp ShapeManager.h Shape.h Polygon.h
	$(CXX) $(CXXFLAGS) -c ShapeManager.cpp

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
