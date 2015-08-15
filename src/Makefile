CC = clang++
CXXFLAGS = -c
CXXLIBS = -shared
OBJ = obj
LOGCPP = logcpp
DESTINC = /usr/include
DESTSHR = /usr/lib
LIBNAME = liblogcpp.so

setup:
	mkdir $(OBJ)
	mkdir $(LOGCPP)

compile:
	$(CC) $(CXXFLAGS) logcpp.cpp

library:
	$(CC) logcpp.o $(CXXLIBS) -o $(LOGCPP)/$(LIBNAME)

build: setup compile library

clean:
	rm -r $(OBJ)
	rm *.o

install:
	cp logcpp.hpp $(DESTINC)
	mv $(LOGCPP)/$(LIBNAME) $(DESTSHR)

uninstall:
	rm $(DESTINC)/logcpp.hpp
	rm $(DESTSHR)/$(LIBNAME)
