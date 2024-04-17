#----------------------------------------------------------------------------
#								VAR											
#----------------------------------------------------------------------------

NAME		= libft.a
AR			= ar rcs #create library, (replace, create, sort)
RM			= rm -f
LIB			= ranlib
GCC			= gcc
CFLAGS 		= -Wall -Wextra -Werror

#----------------------------------------------------------------------------
#								DIRECTORY											
#----------------------------------------------------------------------------

HEAD		= ./includes/
SRC_FILES	= $(wildcard *.c)
OBJ_FILES	= $(SRC_FILES:.c=.o)

#----------------------------------------------------------------------------
#								TARGETS											
#----------------------------------------------------------------------------


all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(AR) $(NAME) $(OBJ_FILES)
	$(LIB) $(NAME)

%.o: %.c
	$(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@

clean:
	$(RM) $(OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re:	fclean all


.PHONY: all clean fclean re