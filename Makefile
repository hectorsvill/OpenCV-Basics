NAME = 3.Windows

SRC = $(NAME).cpp

all:
	g++ $(SRC) -o $(NAME) `pkg-config --cflags --libs opencv`
