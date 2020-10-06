OBJECT = main.o Array.o RangeArray.o
SRC = main.cpp Array.cpp RangeArray.cpp

CC = g++
CFLAGS = -c

TARGET = main

$(TARGET):$(OBJECT)
			$(CC) -o $(TARGET) $(OBJECT)

clean:
		rm $(OBJECT) $(TARGET)

main.o: Array.h RangeArray.h main.cpp
Array.o: Array.h Array.cpp
RangeArray.o: RangeArray.h Array.h RangeArray.cpp
