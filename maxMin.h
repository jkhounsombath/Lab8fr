#ifndef MAXMIN_H
#define MAXMIN_H

#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>
#include <cmath>
#include "game.h"

class maxMin
{
  private:
    game* m_arr;
    void resize();
    int m_size;
    int m_heapSize;
  public:
    maxMin();
    ~maxMin();
    void heapify(int curPos);
    void insert(game tempGame);
};
#endif
