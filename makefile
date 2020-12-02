CC=gcc
SRC= $(wildcard *.c)
OBJ= $(SRC:.C=o )
DEBUG= yes

ifeq ($(DEBUG),yes)
	rep= -g -W -Wall

else 
	rep=

endif 

all:$(EXEX) 

ifeq ($(DEBUG),yes) 
	@echo "Génération en mode debug"
else 
	@echo "Génération en mode Release"
endif       


all: My_binaire 

%.o: %.c
	$(CC) -Wall -o $@ -c $< 

$ my_binaire: $(OBJ)
	$(CC) -o $@ $^ 

clean:
	rm -rf * .o



