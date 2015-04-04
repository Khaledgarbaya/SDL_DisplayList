CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES= display/* geom/*
OBJECTS= $(SOURCES:.cpp=.o)
EXECUTABLE= sdl_display_list
INCLUDES= -I/Library/Frameworks/SDL2.framework/Headers

all: objects

objects:
	$(CC) $(CFLAGS) $(LDFLAGS) $(INCLUDES) $(OBJECTS)

clean:
