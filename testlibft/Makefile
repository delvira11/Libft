
NAME = libft.a

SRC = *.c

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): 
	gcc -c $(FLAGS) $(SRC)
	ar -cr $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean

	/bin/rm -f $(NAME)
	
re: fclean all