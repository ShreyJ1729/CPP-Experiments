game: game.o game_utils.o
	g++ game.o game_utils.o -o game

game.o: game.cpp
	g++ -c game.cpp

game_utils.o: game_utils.cpp
	g++ -c game_utils.cpp

clean:
	rm *.o game