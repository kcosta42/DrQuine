# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/10 10:30:17 by kcosta            #+#    #+#              #
#    Updated: 2019/04/10 11:18:53 by kcosta           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ========== Editable ========== #
COLLEEN	:= Colleen
# ============================== #

# ========== Standard ========== #
CC		:= gcc
FLAGS	:= -Wall -Wextra -Werror
# ============================== #

# =========== Files ============ #
COLLEEN_SRCS_FILE	:= Colleen.c
# ============================== #

# ========== Sources =========== #
SRCS_PATH		:= sources/
COLLEEN_SRCS	:= $(addprefix $(SRCS_PATH), $(COLLEEN_SRCS_FILE))
# ============================== #

# ========== Objects =========== #
OBJS_PATH		:= objs/
COLLEEN_OBJS	:= $(addprefix $(OBJS_PATH), $(COLLEEN_SRCS_FILE:.c=.o))
# ============================== #

.PHONY: all clean fclean re

all: $(COLLEEN)

$(OBJS_PATH)%.o: $(SRCS_PATH)%.c
	@mkdir $(OBJS_PATH) 2> /dev/null || true
	$(CC) $(FLAGS) -o $@ -c $<

$(COLLEEN): $(COLLEEN_OBJS)
	$(CC) $(FLAGS) $(COLLEEN_OBJS) -o $@

clean:
	@rm -fv $(COLLEEN_OBJS)
	@rmdir $(OBJS_PATH) 2> /dev/null || true

fclean: clean
	@rm -fv $(COLLEEN)

re: fclean all