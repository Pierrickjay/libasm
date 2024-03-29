NAME = libasm.a
EXEC = libasmExec
EXECBONUS = libasmExecBonus

SRCS = $(addprefix ft_, $(addsuffix .s, \
	strlen\
	strcpy\
	strcmp\
	write\
	read\
	strdup\
	list_size))

OBJS = $(SRCS:%.s=srcs/.build/%.o)
DEPS = $(SRCS:%.s=srcs/.build/%.d)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

AS = nasm
ASFLAGS = -f elf64

AR = ar
ARFLAGS = rcs

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

srcs/.build/%.o: srcs/%.s
	mkdir -p $(dir $@)
	$(AS) $(ASFLAGS) $< -o $@ -MD -MP -MF $(@:.o=.d)

-include $(DEPS)

exec: $(NAME)
	$(CC) $(CFLAGS) -Iincludes main.c -L. -lasm -o $(EXEC)

run: exec
	./$(EXEC)

bonus: $(NAME)
	$(CC) $(CFLAGS) -Iincludes mainbonus.c -L. -lasm -o $(EXECBONUS)
	./$(EXECBONUS)

clean:
	$(RM) -rf srcs/.build

fclean: clean
	$(RM) $(NAME)
	$(RM) $(EXEC)
	$(RM) $(EXECBONUS)

re: fclean all

.PHONY: all clean fclean re
