# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/10 10:30:17 by kcosta            #+#    #+#              #
#    Updated: 2019/04/10 12:08:16 by kcosta           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ========== Editable ========== #
COLLEEN	:= Colleen
GRACE	:= Grace
# ============================== #

# ========== Standard ========== #
CC		:= gcc
FLAGS	:= -Wall -Wextra -Werror
# ============================== #

# =========== Files ============ #
COLLEEN_SRCS_FILE	:= Colleen.c
GRACE_SRCS_FILE		:= Grace.c
# ============================== #

# ========== Sources =========== #
SRCS_PATH		:= sources/
COLLEEN_SRCS	:= $(addprefix $(SRCS_PATH), $(COLLEEN_SRCS_FILE))
GRACE_SRCS	:= $(addprefix $(SRCS_PATH), $(GRACE_SRCS_FILE))
# ============================== #

# ========== Objects =========== #
OBJS_PATH		:= objs/
COLLEEN_OBJS	:= $(addprefix $(OBJS_PATH), $(COLLEEN_SRCS_FILE:.c=.o))
GRACE_OBJS	:= $(addprefix $(OBJS_PATH), $(GRACE_SRCS_FILE:.c=.o))
# ============================== #

.PHONY: all clean fclean re

all: $(COLLEEN) $(GRACE)

$(OBJS_PATH)%.o: $(SRCS_PATH)%.c
	@mkdir $(OBJS_PATH) 2> /dev/null || true
	$(CC) $(FLAGS) -o $@ -c $<

$(COLLEEN): $(COLLEEN_OBJS)
	$(CC) $(FLAGS) $(COLLEEN_OBJS) -o $@

$(GRACE): $(GRACE_OBJS)
	$(CC) $(FLAGS) $(GRACE_OBJS) -o $@

clean:
	@rm -fv $(COLLEEN_OBJS) $(GRACE_OBJS) Grace_kid.c
	@rmdir $(OBJS_PATH) 2> /dev/null || true

fclean: clean
	@rm -fv $(COLLEEN) $(GRACE)

re: fclean all
