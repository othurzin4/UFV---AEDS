CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

TARGET = main.exe

SOURCES = main.c \
          src/cliente.c \
          src/contaBancaria.c

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)