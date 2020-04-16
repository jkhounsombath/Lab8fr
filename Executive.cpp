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
	heap->print();
}

void Executive::run()
{
	std::cout<<"Welcome to Justin's Lab 8\n";
	menu();
}

Executive::~Executive()
{

}

void Executive::menu()
{
	int choice;
	while (choice != 8)
	{
		std::cout<<"What would you like to do?\n--------------------------\n1.addGame()\n2.deleteMaxDownloadedGame()\n3.deleteGame\n4.printGamesAtMinLevels\n5.printGamesAtMaxLevels\n6.totalMinimumDownloadedGames\n7.totalMaximumDownloadedGames\n8.Exit\n\nChoice: ";
		std::cin>>choice;
		if(choice == 1)
		{
			std::string theName;
			int theDownloads;
			std::cout<<"What is the name of the game you would like to add: ";
			std::cin>>theName;
			std::cout<<"How many downloads does this game have: ";
			std::cin>>theDownloads;
			game Game(theName, theDownloads);
			heap->insert(Game);
			std::cout<<"The Game was successfully entered in the heap\n\n";
		}
		else if(choice == 2)
		{

		}
		else if(choice == 3)
		{

		}
		else if(choice == 4)
		{

		}
		else if(choice == 5)
		{

		}
		else if(choice == 6)
		{

		}
		else if(choice == 7)
		{

		}
		else if(choice == 8)
		{

		}
		else
		{
			std::cout<<"Invalid input (must be a number 1-8)"<<std::endl<<std::endl;
		}
	}
}
