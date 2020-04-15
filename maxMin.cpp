#include "maxMin.h"

void maxMin::resize()
{
  game* tempArr= nullptr;
	m_size= ((m_size+1)*2);
	tempArr= new game[m_size];
	for(int i=0; i<m_heapSize; i++)
	{
		tempArr[i]= m_arr[i];
	}
	delete[] m_arr;
	m_arr= tempArr;
  delete[]tempArr;
}

maxMin::maxMin()
{
  m_arr = nullptr;
  m_size = 0;
  m_heapSize = 0;
}

maxMin::~maxMin()
{
  delete [] m_arr;
}

void maxMin::heapify(int curPos)
{
  bool isMax= 0;
  int newIndex;
  int parent = floor((curPos-1)/2);
  if(int(floor(log2(curPos))) % 2 == 0)
  {
    isMax = 1;
  }
  if(m_arr[parent].getDownloads() == m_arr[curPos].getDownloads())//if x = p(x) done
  {
    return;
  }
  else
  {
    if(m_arr[curPos].getDownloads() < m_arr[parent].getDownloads())//if x < parent we compare with min nodes
    {
      if(isMax)
      {
        newIndex = parent;
      }
      else
      {
        newIndex = floor(curPos/4);
      }
      while(newIndex > 0 && m_arr[curPos].getDownloads() < m_arr[newIndex].getDownloads())
      {
        std::swap(m_arr[newIndex], m_arr[curPos]);
        curPos = newIndex;
        newIndex = floor(newIndex/4);
      }
    }
    else
    {
      if(isMax)
      {
        newIndex = floor(curPos/4);
      }
      else
      {
        newIndex = parent;
      }
      while(newIndex > 0 && m_arr[curPos].getDownloads() > m_arr[newIndex].getDownloads())
      {
        std::swap(m_arr[newIndex], m_arr[curPos]);
        curPos = newIndex;
        newIndex = floor(newIndex/4);
      }
    }
  }
}

void maxMin::insert(game tempGame)
{
  if(m_size == m_heapSize)//resize
  {
    resize();
  }
  if(m_arr[1].getName() == "")
  {
    m_arr[1] = tempGame;
    return;
  }
  for(int i = m_heapSize; i>=2; i--)
  {
    if(m_arr[i-1].getName() != "" && m_arr[i].getName() == "")
    {
      m_arr[i] = tempGame;
      heapify(i);
      break;
    }
  }
}
