#ifndef __MyGA__Initialize__
#define __MyGA__Initialize__

#include <stdio.h>
#include <vector>
#include <boost/random.hpp>
#include <ctime>

class Initialize{
public:
    Initialize();
    Initialize(const int geneLenght);
    std::vector<std::vector<int>>& getGeneList();
private:
    std::vector<std::vector<int>> geneList;
    
};

#endif //__MyGA__Initialize__