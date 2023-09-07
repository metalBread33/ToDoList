#include <vector>
#include <string>
#include <iostream>

class ToDo {

friend std::ostream& operator<< (std::ostream& s, const ToDo& t);
public:
	ToDo ();
	ToDo (std::string date, std::string name);
	
	void changeCompletion();
	bool addSteps();
	
	
	
private:
	std::string DueDate;
	std::vector<ToDo> Steps;
	bool Completed;
	std::string Name;
	


};
