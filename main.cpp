#include <iostream>
#include "ToDo.h"
#include <cctype>

void create (std::vector<ToDo>& list);
void read (std::vector<ToDo>& list);
void update (std::vector<ToDo>& list);
void remove (std::vector<ToDo>& list);	//forgot delete is a keyword lol

void create (std::vector<ToDo>& list)
{
	std::cout << "Create" << std::endl;
}

void read  (std::vector<ToDo>& list)
{
	std::cout << "Read" << std::endl;
}

void update (std::vector<ToDo>& list)
{
	std::cout << "Update" << std::endl;
}

void remove (std::vector<ToDo>& list)
{
	std::cout << "Remove" << std::endl;
}

int main()
{
	std::vector<ToDo> ToDoList;
	char input;
	bool quit = false;
	std::cout<<"Welcome to ToDo CLI" << std::endl;

	do
	{
		std::cout << "What would you like to do" << std::endl;
		std::cout << "C - Create\nR - Read\nU - Update\nD - Delete" 
		  "\nQ - Quit"<< std::endl;
		std::cin >> input;
		input = tolower(input);
		if (input == 'q')
			quit = true;
		else if (input == 'c')
			create(ToDoList);
		else if (input == 'r')
			read(ToDoList);
		else if (input == 'u')
			update(ToDoList);
		else if (input == 'd')
			remove(ToDoList);
		else 
			std::cout << "Invalid. Please try again" << std::endl; 
	} while (!quit);


	return 0;
}
