#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>

#include "maxMin.h"
#include "game.h"

class Executive
{
	private:
		maxMin* heap;
	public:
		Executive(std::string fileName);
		void run();
		~Executive();
};
#endif
