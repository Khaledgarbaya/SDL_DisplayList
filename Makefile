CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=display/* geom/*
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=sdl_display_list

all: objects

objects:
	$CC $CFLAGS $LDFLAGS $OBJECTS

clean:
	
