NAME = 12.WebcamAndVideoCapture

SRC = $(NAME).cpp

all:
	g++ $(SRC) -o $(NAME) `pkg-config --cflags --libs opencv`

clean:
	rm $(NAME)
