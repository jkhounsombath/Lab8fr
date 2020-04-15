#include "Executive.h"

Executive::Executive(std::string fileName)
{
	heap = new maxMin();
	std::ifstream inFile("data.txt");
	std::string name;
	int downloads;
	while(inFile>>name)
	{
		name.pop_back();
		inFile>>downloads;
		std::cout<<"Attempting to insert game: "<<name<<" Downloads: "<<downloads<<std::endl;
		game Game(name, downloads);
		heap->insert(Game);
	}
}

void Executive::run()
{

}

Executive::~Executive()
{

}
