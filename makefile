Lab8: main.o Executive.o maxMin.o game.o
	g++ -g -std=c++11 -Wall main.o Executive.o maxMin.o game.o -o Lab8

main.o: main.cpp Executive.h
	g++ -g -std=c++11 -Wall -c main.cpp

Executive.o: Executive.h Executive.cpp
	g++ -g -std=c++11 -Wall -c Executive.cpp

maxMin.o: maxMin.h maxMin.cpp
	g++ -g -std=c++11 -Wall -c maxMin.cpp

game.o: game.h game.cpp
	g++ -g -std=c++11 -Wall -c game.cpp

clean:
	rm *.o Lab8
