LIBS= -lgtest -lpthread
test: test.cpp pair.h guess.h
	g++ test.cpp -o test  $(LIBS) --std=c++11

.PHONEY: clean
clean:
	rm test
<<< this is a change
