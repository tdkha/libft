#----------------------------------------------------------------------------
#                                VAR                                            
#----------------------------------------------------------------------------

NAME                = libft.a
AR                  = ar rcs # create library, (replace, create, sort)
RM                  = rm -rf
LIB                 = ranlib
CC                  = cc
CFLAGS              = -Wall -Wextra -Werror

#----------------------------------------------------------------------------
#                                DIRECTORY                                            
#----------------------------------------------------------------------------

HEAD                =   ./includes/
GNL_DIR             =   ./gnl
PRINTF_DIR          =   ./ft_printf

#----------------------------------------------------------------------------
#                                FILES                                            
#----------------------------------------------------------------------------

SRC_FILES           =   ./ft_atoi.c ./ft_bzero.c ./ft_calloc.c \
                        ./ft_isalnum.c ./ft_isalpha.c ./ft_isspace.c \
                        ./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c \
                        ./ft_itoa.c ./ft_atold.c \
                        ./ft_memchr.c ./ft_memcmp.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c \
                        ./ft_putchar_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c ./ft_putstr_fd.c \
                        ./ft_split_skip_delimiter.c ./ft_split.c ./ft_split_esc.c \
                        ./ft_strchr.c ./ft_strdup.c ./ft_striteri.c ./ft_strjoin.c ./ft_strlcat.c \
                        ./ft_strlcpy.c ./ft_strlen.c ./ft_strmapi.c ./ft_strncmp.c ./ft_strnstr.c ./ft_strrchr.c \
                        ./ft_strtrim.c ./ft_substr.c \
                        ./ft_strcmp.c \
                        ./ft_tolower.c ./ft_toupper.c \
                        ./ft_free.c \
						./ft_abs.c


SRC_BONUS_FILES     =   ./ft_lstnew_bonus.c ./ft_lstadd_front_bonus.c ./ft_lstsize_bonus.c ./ft_lstlast_bonus.c ./ft_lstadd_back_bonus.c \
                        ./ft_lstdelone_bonus.c ./ft_lstclear_bonus.c ./ft_lstiter_bonus.c ./ft_lstmap_bonus.c


PRINTF_SRC_FILES	=	./ft_printf/ft_printf.c \
                        ./ft_printf/ft_print_format.c \
                        ./ft_printf/ft_add_to_struct.c \
                        ./ft_printf/ft_print_char.c \
                        ./ft_printf/ft_print_str.c \
                        ./ft_printf/ft_print_num_base.c  \
                        ./ft_printf/ft_print_ptr.c \
                        ./ft_printf/ft_struct_utils.c
  

GNL_SRC_FILES       =   ./gnl/get_next_line_utils.c \
                        ./gnl/get_next_line.c
GNL_BONUS_SRC_FILES =   ./gnl/get_next_line_utils_bonus.c \
                        ./gnl/get_next_line_bonus.c

OBJ_FILES           =   $(SRC_FILES:.c=.o)
OBJ_BONUS_FILES     =   $(SRC_BONUS_FILES:.c=.o)

PRINTF_OBJ_FILES    =   $(PRINTF_SRC_FILES:.c=.o)

GNL_OBJ_FILES       =   $(GNL_SRC_FILES:.c=.o)
GNL_OBJ_BONUS_FILES =   $(GNL_BONUS_SRC_FILES:.c=.o)



#----------------------------------------------------------------------------
#                                TARGETS                                            
#----------------------------------------------------------------------------

all: $(NAME)

$(NAME): $(OBJ_FILES) $(GNL_OBJ_FILES) $(PRINTF_OBJ_FILES)
	@$(AR) $(NAME) $(OBJ_FILES) $(GNL_OBJ_FILES) $(PRINTF_OBJ_FILES)
	@$(LIB) $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $@

$(GNL_DIR)/%.o: $(GNL_DIR)/%.c
	@$(CC) $(CFLAGS) -c -I $(GNL_DIR) $< -o $@

$(PRINTF_DIR)/%.o: $(PRINTF_DIR)/%.c
	@$(CC) $(CFLAGS) -c -I $(PRINTF_DIR) $< -o $@

ft_printf: $(PRINTF_OBJ_FILES)
	@$(AR) $(NAME) $(PRINTF_OBJ_FILES)
	@$(LIB) $(NAME)

gnl: $(GNL_OBJ_FILES)
	@$(AR) $(NAME) $(GNL_OBJ_FILES)
	@$(LIB) $(NAME)

gnl_bonus: $(GNL_OBJ_BONUS_FILES)
	@$(AR) $(NAME) $(GNL_OBJ_BONUS_FILES)
	@$(LIB) $(NAME)

bonus: .bonus

.bonus: $(OBJ_FILES) $(OBJ_BONUS_FILES) $(GNL_OBJ_BONUS_FILES)
	@$(RM) $(GNL_OBJ_FILES)
	@$(AR) $(NAME) $(OBJ_FILES) $(OBJ_BONUS_FILES) $(GNL_OBJ_BONUS_FILES)
	@$(LIB) $(NAME)
	@touch .bonus


clean:
	@$(RM) $(OBJ_FILES) $(OBJ_BONUS_FILES) $(GNL_OBJ_FILES) $(GNL_OBJ_BONUS_FILES) $(PRINTF_OBJ_FILES)
	@rm -f .bonus

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus gnl gnl_bonus
