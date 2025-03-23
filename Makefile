# Makefile para Clingua

# Configurações
CC      = gcc
CFLAGS  = -Wall -Wextra -Iinclude
LDFLAGS = 
TARGET  = build/clingua
SRCDIR  = src
OBJDIR  = build/obj

# Encontra todos os arquivos fonte
SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))

# Regra principal
all: directories $(TARGET)

# Cria diretórios necessários
directories:
	@mkdir -p $(OBJDIR)

# Compila o executável
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

# Compila objetos
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza
clean:
	rm -rf build

# Instalação (opcional)
install: $(TARGET)
	cp $(TARGET) /usr/local/bin

# Desinstalar (opcional)
uninstall:
	rm -f /usr/local/bin/clingua

# Gera dependências automaticamente
dep:
	$(CC) -MM $(SOURCES) > dependencies.d

# Inclui dependências (se gerado)
-include dependencies.d

.PHONY: all clean install uninstall directories