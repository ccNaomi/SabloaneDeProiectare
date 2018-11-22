CC = g++
TARGET = write
SRC = main.cpp Author.cpp Book.cpp Chapter.cpp SubChapter.cpp Paragraph.cpp Image.cpp Table.cpp TableOfContent.cpp

OBJ = $(SRC:.cpp=.o)


$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

clean:
	rm *.o $(TARGET)
