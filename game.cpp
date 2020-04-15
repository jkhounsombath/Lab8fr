#include "game.h"

game::game()
{
  m_name = "";
  m_downloads = 0;
}
game::game(std::string name, int downloads)
{
  m_name = name;
  m_downloads = downloads;
}

game::~game()
{

}

std::string game::getName()
{
  return m_name;
}

int game::getDownloads()
{
  return m_downloads;
}
