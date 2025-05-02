CC = c++
NAME = ex2
SRCS = ex2.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME) clean 

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all