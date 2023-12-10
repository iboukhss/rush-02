NAME = rush-02
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_FILES = main.c dict_parse.c strings.c

all: $(NAME)

$(NAME): $(SRC_FILES)
	$(CC) $(SRC_FILES) -o $(NAME) $(CFLAGS)

clean:
	rm -rf $(NAME)

fclean: clean

.PHONY: all clean fclean
