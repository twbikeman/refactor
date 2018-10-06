FLAGS=
LIBS=

all: rental.cpp
	g++ rental.cpp -c -Werror -fmax-errors=1

.PHONY: clean

clean:
	rm *.o rental
