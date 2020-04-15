#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>

class game
{
  private:
    std::string m_name;
    int m_downloads;
  public:
    game();
    game(std::string name, int downloads);
    ~game();
    std::string getName();
    int getDownloads();
};
#endif
