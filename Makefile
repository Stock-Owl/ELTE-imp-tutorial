dir = ./src
odir = .
flags = -Wextra -std=c99 -pedantic

all: main clean
	@echo "Built and cleaned the project... to $(odir)"

main: 
	gcc $(flags) $(dir)/main.c -o $(odir)/dnd.exe

clean:
	@rm -rf ./*.o ./*.s
