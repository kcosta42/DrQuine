# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/10 10:30:17 by kcosta            #+#    #+#              #
#    Updated: 2019/04/11 16:16:34 by kcosta           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ========== Editable ========== #
COLLEEN	:= Colleen
GRACE	:= Grace
SULLY	:= Sully
# ============================== #

# ========== Standard ========== #
NASM	:= nasm
FLAGS	:= -f macho64
LD		:= ld
LDFLAGS	:= -macosx_version_min 10.8 -lSystem
# ============================== #

# =========== Files ============ #
COLLEEN_SRCS_FILE	:= Colleen.s
GRACE_SRCS_FILE		:= Grace.s
SULLY_SRCS_FILE		:= Sully.s
# ============================== #

# ========== Sources =========== #
SRCS_PATH		:= ./
COLLEEN_SRCS	:= $(addprefix $(SRCS_PATH), $(COLLEEN_SRCS_FILE))
GRACE_SRCS		:= $(addprefix $(SRCS_PATH), $(GRACE_SRCS_FILE))
SULLY_SRCS		:= $(addprefix $(SRCS_PATH), $(SULLY_SRCS_FILE))
# ============================== #

# ========== Objects =========== #
OBJS_PATH		:= objs/
COLLEEN_OBJS	:= $(addprefix $(OBJS_PATH), $(COLLEEN_SRCS_FILE:.s=.o))
GRACE_OBJS		:= $(addprefix $(OBJS_PATH), $(GRACE_SRCS_FILE:.s=.o))
SULLY_OBJS		:= $(addprefix $(OBJS_PATH), $(SULLY_SRCS_FILE:.s=.o))
# ============================== #

.PHONY: all clean fclean re

all: $(COLLEEN) $(GRACE) $(SULLY)

$(OBJS_PATH)%.o: $(SRCS_PATH)%.s
	@mkdir $(OBJS_PATH) 2> /dev/null || true
	$(NASM) $(FLAGS) $< -o $@

$(COLLEEN): $(COLLEEN_OBJS)
	$(LD) $(LDFLAGS) $(COLLEEN_OBJS) -o $@

$(GRACE): $(GRACE_OBJS)
	$(LD) $(LDFLAGS) $(GRACE_OBJS) -o $@

$(SULLY): $(SULLY_OBJS)
	$(LD) $(LDFLAGS) $(SULLY_OBJS) -o $@

clean:
	@rm -fv $(COLLEEN_OBJS) $(GRACE_OBJS) Grace_kid.s $(SULLY_OBJS)
	@rmdir $(OBJS_PATH) 2> /dev/null || true

fclean: clean
	@rm -fv $(COLLEEN) $(GRACE) $(SULLY)

re: fclean all
