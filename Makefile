NAME = 4.AccessingPixelsUsingAtMethod

SRC = $(NAME).cpp

all:
	g++ $(SRC) -o $(NAME) `pkg-config --cflags --libs opencv`

clean:
	rm $(NAME)
