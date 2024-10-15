NAME = AsmTester

LIB_NAME = libasm.a

SRCS_ASM = ft_read.s \
	  ft_write.s \
	  ft_strcpy.s \
	  ft_strlen.s \
	  ft_strcmp.s \
	  ft_strdup.s \

SRCS = ./src/main.c

RM = rm -f

SRCS_DIR = src

OBJS_DIR = obj

LIBS_DIR = lib

OBJS = $(addprefix $(OBJS_DIR)/,$(SRCS_ASM:.s=.o))

CC = gcc

NASM = nasm -f elf64

LIB_PATH = lib/libasm.a

AR = ar rc -s $(LIB_PATH) $(OBJS)

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJS_DIR) $(LIBS_DIR) $(LIB_PATH) $(SRCS) 
	$(CC) $(SRCS) $(LIB_PATH) -o $(NAME)

$(LIB_PATH): $(OBJS) 
	$(AR)

$(OBJS_DIR) :
	mkdir obj

$(LIBS_DIR) :
	mkdir lib

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.s
	$(NASM) $< -o $@

clean:
	$(RM) $(OBJS)
	$(RM) $(LIB_PATH)
	$(RM) -rf $(OBJS_DIR)
	$(RM) -rf $(LIBS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all