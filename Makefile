link: QueType QueDr.cpp
	g++ -Wall -g -pedantic-errors -o a1 QueType.o QueDr.cpp

QueType: QueType.cpp QueType.h
	g++ -c -Wall -g -pedantic-errors QueType.cpp

NewDriver: QueType NewDriver.cpp
	g++ -Wall -g -pedantic-errors -o NewDriver.o QueType.o NewDriver.cpp

Test: QueType Test.cpp
	g++ -Wall -g -pedantic-errors -o Test.o QueType.o Test.cpp

run:
	./a1

clean:
	/bin/rm *.o a1