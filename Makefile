# Compilador Ultilizado
CC=g++
# Localização da Biblioteca
LIB=lib/velha.cpp
# Nome do código do Jogo
NAME=jogodavelha.cpp
# Compilando todo o Software
all:
	$(CC) $(NAME) $(LIB) -o jogodavelha
# Gerando Biblioteca Dinâmica para Sistemas Operacionais Linux
libLinux:
	$(CC) -shared -fPIC $(LIB) -o lib/libvelha.so
# Excluido binário gerado e lib se existir
clean:
	rm -f jogodavelha lib/libvelha.so