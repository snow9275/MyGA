//
//  Selection.h
//  MyGA
//
//  Created by 守山明高 on 2015/08/02.
//  Copyright (c) 2015年 Akitaka Moriyama. All rights reserved.
//

#ifndef __MyGA__Selection__
#define __MyGA__Selection__

#pragma warning(disable : 4996) 
#include <vector>
#include <boost/random.hpp>
#include <ctime>

class Selection{
public:
    void select(std::vector<int>& evaluateList, std::vector<std::vector<int>>& genesList, std::vector<std::vector<int>>& selectedGenes);
    
};


#endif /* defined(__MyGA__Selection__) */
