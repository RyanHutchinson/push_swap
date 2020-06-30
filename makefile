NAME = libps.a

NAME1 = checker

NAME2 = push_swap

SRC = commands_cond_exe.c commands_exe.c stack_funcs.c c_stack_funcs.c \
	  stack_handler.c passing_commands.c compare_stacks.c compare_stacks2.c \
	  push_elem.c size_compare.c small_solve.c popout_error.c

OBJ = $(SRC:%.c=%.o)

LIB = -L. -L libft/ -lps -lft

FLAGS = -Wall -Werror -Wextra

all:	$(NAME1) $(NAME2)

$(NAME): libft
	@gcc $(FLAGS) -c -I. $(SRC)
	@ar rc $(NAME) $(OBJ)

$(NAME1):	$(NAME)
	@gcc $(FLAGS) checker_main.c $(LIB) -o $(NAME1)
	@echo "amoepi";

$(NAME2):	$(NAME)
	@gcc $(FLAGS) push_swap_main.c $(LIB) -o $(NAME2)
	@echo "amoepi";

clean:
	@/bin/rm -f $(OBJ)

fclean:	clean
	@/bin/rm -f $(NAME) $(NAME1) $(NAME2)

re:	fclean all

libft:
	@make -C libft/ fclean && make -C libft/

norm:
	@norminette -R CheckForbiddenSourceHeader
