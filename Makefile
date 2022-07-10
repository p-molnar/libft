# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pmolnar <pmolnar@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/04 17:46:44 by pmolnar       #+#    #+#                  #
#    Updated: 2022/07/11 00:56:01 by pmolnar       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC			=	gcc
CFLAGS		+=	-Wall -Werror -Wextra
CFLAGS		+=	-g
CFLAGS		+=	-fsanitize=address
INCLUDE		=	-I include

RED			=	"\033[0;31m"
GREEN		=	"\033[0;32m"
YELLOW		=	"\033[1;33m"
DEF			=	"\033[0m"

ASCII_DIR	=	ascii/
P_ASCII		=	$(addprefix $(ASCII_DIR), $(ASCII))
ASCII		=	ft_isalnum.c		ft_isalpha.c					\
				ft_isascii.c		ft_isdigit.c					\
				ft_islower.c		ft_isprint.c					\
				ft_isspace.c		ft_isupper.c					\
				ft_tolower.c		ft_toupper.c					\

LIST_DIR	=	list/
P_LIST		=	$(addprefix $(LIST_DIR), $(LIST))
LIST		=	ft_lstadd_back_bonus.c	ft_lstadd_front_bonus.c		\
				ft_lstclear_bonus.c		ft_lstdelone_bonus.c		\
				ft_lstiter_bonus.c		ft_lstlast_bonus.c			\
				ft_lstmap_bonus.c		ft_lstnew_bonus.c			\
				ft_lstsize_bonus.c									\

MATH_DIR	=	math/
P_MATH		=	$(addprefix $(MATH_DIR), $(MATH))
MATH		=	ft_abs.c				ft_get_num_len.c			\
				ft_int_max.c			ft_isnegative.c				\

MEMORY_DIR	=	memory/
P_MEMORY	=	$(addprefix $(MEMORY_DIR), $(MEMORY))
MEMORY		=	ft_bzero.c				ft_calloc.c					\
				ft_memchr.c				ft_memcmp.c					\
				ft_memcpy.c				ft_memmove.c				\
				ft_memset.c											\

PUT_DIR		=	put/
P_PUT		=	$(addprefix$(PUT_DIR), $(PUT))
PUT			=	ft_putchar_fd.c			ft_putendl_fd.c				\
				ft_putnbr_fd.c			ft_putstr_fd.c				\

STRING_DIR	=	string/
P_STRING	=	$(addprefix $(STRING_DIR), $(STRING))
STRING		=	ft_atod.c				ft_atof.c					\
				ft_atoi.c				ft_count.c					\
				ft_dtoa.c				ft_itoa.c					\
				ft_reverse_str.c		ft_split.c					\
				ft_strchr.c				ft_strdup.c					\
				ft_striteri.c			ft_strjoin.c				\
				ft_strlcat.c			ft_strlcpy.c				\
				ft_strlen.c				ft_strmapi.c				\
				ft_strncmp.c			ft_strnstr.c				\
				ft_strrchr.c			ft_strtrim.c				\
				ft_substr.c											\

NAME		=	libft.a
SRC_DIR		=	src/
SRC			=	$(P_ASCII) $(P_LIST) $(P_MATH) $(P_MEMORY) $(P_PUT)	\
				$(P_STRING)

OBJ_DIR		=	obj/
OBJS		=	$(SRC:.c=.o)
P_OBJS		=	$(addprefix obj/, $(OBJS))

all: $(NAME)

$(NAME): $(P_OBJS) 
	@ar rcs $(NAME) $(P_OBJS)
	@echo $(GREEN)$(NAME) archive created: $(shell pwd)$(DEF)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	@echo compiling: $<

clean:
	@rm -rf $(P_OBJS) $(OBJ_DIR)
	@echo $(GREEN)object file\(s\) removed$(DEF)


fclean: clean
	@rm -f $(NAME)
	@echo $(GREEN)$(NAME) removed$(DEF)

re: fclean all
	@echo $(GREEN)libft recompiled$(DEF)

.PHONY: all clean fclean re
