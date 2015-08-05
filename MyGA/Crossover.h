//
//  Crossover.h
//  MyGA
//
//  Created by 守山明高 on 2015/08/01.
//  Copyright (c) 2015年 Akitaka Moriyama. All rights reserved.
//

#ifndef __MyGA__Crossover__
#define __MyGA__Crossover__

#pragma warning(disable : 4996) 
#include <vector>
#include <boost/random.hpp>
#include <ctime>

class Crossover{
public:
    Crossover();
    void cross(std::vector<std::vector<int>>& selectedGenes, const int geneLength);
};
#endif /* defined(__MyGA__Crossover__) */
