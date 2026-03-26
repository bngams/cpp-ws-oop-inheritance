# Makefile pour l'exercice 1

CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = vehicule
OBJS = main.o Vehicule.o Bus.o SchoolBus.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp Vehicule.h Bus.h SchoolBus.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Vehicule.o: Vehicule.cpp Vehicule.h
	$(CXX) $(CXXFLAGS) -c Vehicule.cpp

Bus.o: Bus.cpp Bus.h Vehicule.h
	$(CXX) $(CXXFLAGS) -c Bus.cpp

SchoolBus.o: SchoolBus.cpp SchoolBus.h Bus.h
	$(CXX) $(CXXFLAGS) -c SchoolBus.cpp

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
