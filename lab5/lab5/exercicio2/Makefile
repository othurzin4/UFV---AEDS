CC = gcc
CFLAGS = -Wall -Wextra -Iinclude -I../exercicio1/include

TARGET = main.exe

SOURCES = main.c \
          src/listaTransacoes.c \
          src/transacaoBancaria.c \
          ../exercicio1/src/cliente.c \
          ../exercicio1/src/contaBancaria.c

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)