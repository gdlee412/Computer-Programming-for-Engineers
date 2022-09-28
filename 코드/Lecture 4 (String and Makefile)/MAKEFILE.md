# How to create a Makefile

## Makefile syntax

target(s) : dependency(ies)
<tab> command
<tab> command

## Makefile version 1

all: todo

todo: my_memo.o my_cal.o main.o
    g++ -W -Wall -o todo my_memo.o my_cal.o main.o

my_memo.o: my_memo.cc
    g++ -W -Wall -c -o todo my_memo.o my_memo.cc

my_cal.o: my_cal.cc
    g++ -W -Wall -c -o todo my_cal.o my_cal.cc

main.o: main.cc
    g++ -W -Wall -c -o todo main.o main.cc

clean:
    rm -rf *.o todo

## Makefile version 2
Syntax: $(var) -> substitution

SOURCE = helloworld.c
TARGET = helloworld

helloworld: $(SOURCE)
    g++ -o $(TARGET) $(SOURCE)

clean:
    rm $(TARGET)

## Makefile version 3
syntax: 
$@ -> current target name
$^ -> current dependency list

SOURCE = helloworld.c
TARGET = helloworld

helloworld: $(SOURCE)
    g++ -o $@ $^

clean:
    rm $(TARGET)

## Makefile version 4
implicit rules, magic rules
a.o will automatically be generated from a.cc or a.cpp

CC = g++
CXXFLAGS = -W -Wall
TARGET=todo

all: $(TARGET)

OBJS = my_memo.o my_cal.o main.o

todo: $(OBJS)
    $CC $CXXFLAGS -o $@ $^

clean:
    rm -rf *.o todo