OBJECT = main.o Str.o
SRC= main.cpp Str.cpp

CC = g++
CFLAGS = -c

TARGET = main

$(TARGET):$(OBJECT)
			$(CC) -o $(TARGET) $(OBJECT)
				

clean:
	rm $(OBJECT) $(TARGET)

main.o: Str.h main.cpp
Str.o: Str.h Str.cpp
