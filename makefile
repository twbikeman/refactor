FLAGS=
LIBS=

all: rental.cpp
	g++ rental.cpp 

.phony clean

clean:
	rm *.o rental
