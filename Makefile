NAME		= push_swap
CC			= gcc
BIN			= bin
SRC			= src/main.c src/utils_0.c src/list_utils.c \
src/parsing.c src/initialization.c src/sorting_big.c \
src/utils_1.c src/utils_2.c src/utils_3.c src/utils_4.c src/utils_5.c\
src/sorting_small.c
OBJS		= $(SRC:src/%c=$(BIN)/%o)
INCS		= include
LIBFT		= libft
LIBFT_INCS	= $(LIBFT)
CFLAGS		= -Wall -Werror -Wextra -g
LFLAGS		= -L$(LIBFT) -lft
IFLAGS		= -I$(INCS) -I$(LIBFT_INCS)
RM			= rm -rf
VALGRIND	= @valgrind --leak-check=full --show-leak-kinds=all
#--track-origins=yes --quiet --tool=memcheck --keep-debuginfo=yes

all: $(NAME)

$(NAME): ${BIN} ${OBJS} | ${LIBFT}
	${CC} ${CFLAGS} ${OBJS} ${LFLAGS} -o ${NAME}

$(BIN)/%o: src/%c
	${CC} ${CFLAGS} -c $< ${IFLAGS} -o $@

$(BIN):
	mkdir -p $(BIN)

$(LIBFT):
	@make all -C $(LIBFT) --no-print-directory

clean:
	$(RM) $(BIN)

fclean: clean
	$(RM) $(NAME)
	@make fclean -C $(LIBFT) --no-print-directory

re: fclean all

test: ${NAME}
	${VALGRIND} ./${NAME}

show:
	@printf "NAME  		: $(NAME)\n"
	@printf "CC		: $(CC)\n"
	@printf "CFLAGS		: $(CFLAGS)\n"
	@printf "LFLAGS		: $(LFLAGS)\n"
	@printf "IFLAGS		: $(IFLAGS)\n"
	@printf "SRC		: $(SRC)\n"
	@printf "OBJS		: $(OBJS)\n"

.PHONY: $(LIBFT) re all clean fclean