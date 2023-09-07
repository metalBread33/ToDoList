#include <iostream>
#include "ToDo.h"
#include <cctype>

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
			std::cout << "Create" << std::endl;
		else if (input == 'r')
			std::cout << "Read" << std::endl;
		else if (input == 'u')
			std::cout << "Update" << std::endl;
		else if (input == 'd')
			std::cout << "Delete" << std::endl;
		else 
			std::cout << "Invalid. Please try again" << std::endl; 
	} while (!quit);


	return 0;
}
