CXX= g++
CXXFLAGS= -g -o chess.x

OBJS = peon.o torre.o alfil.o caballo.o dama.o rey.o tablero.o

all: ${OBJS}
	$(CXX) $(CXXFLAGS) -o chess ${OBJS}

clean: 
	rm *.*~ *~ *.o chess 
	
