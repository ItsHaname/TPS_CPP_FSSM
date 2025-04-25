# Nom du compilateur
CC = c++

# Nom de l'exécutable
NAME = main1

# Fichiers sources
SRCS = Exercice1.cpp main1.cpp

# Fichiers objets
OBJS = $(SRCS:.cpp=.o)

# Cible par défaut
all: $(NAME)

# Compilation de l'exécutable
$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

# Compilation des fichiers .cpp en .o
%.o: %.cpp
	$(CC) -c $< -o $@

# Nettoyer les fichiers objets
clean:
	rm -f $(OBJS)

# Nettoyer les fichiers objets + exécutable
fclean: clean
	rm -f $(NAME)

# Recompiler tout
re: fclean all
