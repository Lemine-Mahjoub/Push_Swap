.PHONY: all clean norminette compile run

all: clean norminette compile run

clean:
	@clear
	@rm -f main

norminette:
	@echo "Norminette :"
	@ls *.c
	@ls lib/*.c
	@echo
	@norminette *.c lib/*.c
	@echo

compile:
	@echo "Compiling :"
	@gcc *c -o main -Wall -Wextra -Werror
	@echo OK
	@echo


run:
	@echo "Running :"
	@./main
	@echo



