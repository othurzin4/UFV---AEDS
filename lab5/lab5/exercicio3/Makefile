CC = gcc
CFLAGS = -Wall -Wextra -Iinclude -I../exercicio1/include

TARGET = main.exe

SOURCES = main.c \
          ../exercicio1/src/cliente.c \

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)