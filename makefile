.PHONY: all clean norminette compile

all: clean norminette compile

clean:
	@clear
	@rm -f main

norminette:
	@echo "Norminette :"
	@ls *.c
	@ls lib/*.c
	@echo
	@norminette
	@echo

compile:
	@echo "Compiling :"
	@gcc lib/*c checker.c -o checker -Wall -Wextra -Werror
	@echo OK
	@echo





