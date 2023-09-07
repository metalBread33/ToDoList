#include "ToDo.h"
#include <iostream>

ToDo::ToDo()
{
	Name = "";
	Completed = false;
	DueDate = "none";
}

ToDo::ToDo (std::string date, std::string name)
{
	DueDate = date;
	Name = name;
	Completed = false;
}

void ToDo::changeCompletion()
{
	Completed = !Completed;
}


