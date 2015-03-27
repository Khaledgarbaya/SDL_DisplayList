# source files.
SRC =  	display/DisplayObject.cpp display/DisplayObjectContainer.cpp display/Image.cpp geom/Point.cpp geom/Rectangle.cpp

OBJ = $(SRC:.cpp=.o)

OUT = ../libutils.a

# include directories
INCLUDES = -I/usr/local/include 

# C++ compiler flags (-g -O2 -Wall)
CCFLAGS = -g

# compiler
CCC = g++

# library paths
LIBS = -L../ -L/usr/local/lib -lm

# compile flags
LDFLAGS = -g

.SUFFIXES: .cpp

default: dep $(OUT)

.cpp.o:
	$(CCC) $(INCLUDES) $(CCFLAGS) -c $< -o $@

$(OUT): $(OBJ)
	ar rcs $(OUT) $(OBJ)

depend: dep

dep:
	makedepend -- $(CFLAGS) -- $(INCLUDES) $(SRC)

clean:
	rm -f $(OBJ) $(OUT) Makefile.bak
