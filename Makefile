dir = ./src
odir = .

all: main clean
	@echo "Built and cleaned the project... to $(odir)"

main: 
	gcc $(dir)/main.c -o $(odir)/dnd.exe

clean:
	@rm -rf ./*.o ./*.s
