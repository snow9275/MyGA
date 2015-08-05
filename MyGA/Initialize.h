#ifndef __MyGA__Initialize__
#define __MyGA__Initialize__

#pragma warning(disable : 4996) 
#include <stdio.h>
#include <vector>
#include <boost/random.hpp>
#include <ctime>

class Initialize{
public:
    Initialize(const int geneLenght);
    std::vector<std::vector<int>>& getGeneList();
private:
    std::vector<std::vector<int>> geneList;
    
};

#endif //__MyGA__Initialize__