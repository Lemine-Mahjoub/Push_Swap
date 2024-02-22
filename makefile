.PHONY: all clean norminette compile run

all: clean norminette compile run

clean:
	@clear
	@rm -f main

norminette:
	@echo "Norminette :"
	@ls *.c
	@norminette *.c
	@echo "\n"

compile:
	@echo "Compiling :"
	@gcc *c -o main -Wall -Wextra -Werror
	@echo "\n"

run:
	@echo "Running :"
	./main
	@echo "\n"


