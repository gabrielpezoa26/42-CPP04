NAME = Brain
OBJECTS = objects/main.o objects/Animal.o objects/Dog.o objects/Cat.o objects/WrongAnimal.o objects/WrongCat.o objects/Brain.o
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_DIR = objects

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

$(OBJECTS): | $(OBJ_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

objects/main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o objects/main.o

objects/Animal.o: Animal.cpp
	$(CC) $(CFLAGS) -c Animal.cpp -o objects/Animal.o

objects/Dog.o: Dog.cpp
	$(CC) $(CFLAGS) -c Dog.cpp -o objects/Dog.o

objects/Cat.o: Cat.cpp
	$(CC) $(CFLAGS) -c Cat.cpp -o objects/Cat.o

objects/WrongAnimal.o: WrongAnimal.cpp
	$(CC) $(CFLAGS) -c WrongAnimal.cpp -o objects/WrongAnimal.o

objects/WrongCat.o: WrongCat.cpp
	$(CC) $(CFLAGS) -c WrongCat.cpp -o objects/WrongCat.o

objects/Brain.o: Brain.cpp
	$(CC) $(CFLAGS) -c Brain.cpp -o objects/Brain.o


clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

run: all
	./$(NAME)

val: all
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

re: fclean all