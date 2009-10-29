PROJECT = hacksim
IN      = src/*.cpp src/**/*.cpp src/**/**/*.cpp
OUT     = bin/$(PROJECT)

CC      = g++
CFLAGS  = -O2 -Wall -ansi -pedantic -g
LFLAGS  = -lGL -lGLU -lSDL -lSDL_image

all: $(PROJECT)

$(PROJECT): $(IN)
	$(CC) $(CFLAGS) $(IN) -o "$(OUT)" $(LFLAGS)

