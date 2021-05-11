CC = g++

INCPATH = -I./include \
			-I./hxcpp/include \

LIBPATH = -L. \

LDLIBS = -loutput -lpthread

CFLAGS = -O3 -std=c++11 -Wl,-rpath=.

SOURCE = test.cpp

TARGET = test

all:
	$(CC) $(CFLAGS) $(INCPATH) $(LIBPATH) $(SOURCE) $(LDLIBS) -o $(TARGET)

clean:
	rm -f test